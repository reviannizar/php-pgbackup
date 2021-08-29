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
