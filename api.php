<?php
function __autoload($class_name){
    include 'inc/class.'.$class_name.'.inc';
}

$database = Database::getInstance();
$db = $database->getConnection();

$log = new KLogger ( "log/app.log", KLogger::DEBUG );

if (!array_key_exists('HTTP_ORIGIN', $_SERVER)) {
    $_SERVER['HTTP_ORIGIN'] = $_SERVER['SERVER_NAME'];
}

try {
    $API = new MyApi($_REQUEST['request'], $_SERVER['HTTP_ORIGIN'], $log, $db);
    echo $API->processAPI();
} catch (Exception $e) {
    echo json_encode(Array('error' => $e->getMessage()));
}


