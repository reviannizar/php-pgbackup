# php-pgbackup
Merupakan bash script php yang digunakan untuk membuat backup otomatis database postgre SQL.
Jumlah File backup bisa diset sesuai kebutuhan misalkan hanya butuh 3 file backup maka hanya akan ada 3 file, backup hari ini, kemarin dan kemarin lusa, backup 3 hari sebelumnya otomatis akan dihapus. 

# Instalasi
1. Instalasi tinggal di copy ke folder 
```
git clone https://github.com/reviannizar/php-pgbackup.git
```

2. Ubah file options.inc sesuai dengan db yang mau dibackup
```php
<?php

define('_DBS_PORT_','5432');
define('_DBS_NAME_','pgdb');
define('_DBS_USERNAME_','postgres');
define('_DBS_PASSWORD_','xxx');
define('_DB_HOST_SERVER_','localhost');

/*
	* [_BACKUP_PATH_] lokasi folder backup file 
	* [_BACKUP_NAME_] nama file backup
	* [_BACKUP_FILES_] jumlah file backup jika 3 backup hari ini, kemarin dan kemarin lusa, jumlah file backup selalu 3 file
*/
define('_BACKUP_PATH_','/home/');
define('_BACKUP_NAME_','backup');
define('_BACKUP_FILES_',3);
```

3. Ubah file backup supaya bisa di eksekusi
```
$chmod +x backup 
```

4. Tes apakah sudah bisa dijalankan, jika sudah bisa dijalankan akan ada file backup
```
$/home/jbiru/php-pgbackup/backup
```

5. Buat di crontab
Misalkan mau di autobackup setiap jam 00:30
```
# Auto backup
30 00 * * * /home/jbiru/php-pgbackup/backup
```
