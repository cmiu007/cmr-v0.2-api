<?php
/**
 * Mysql database; only one connection
 * 
 * 
 */
 class Database {
    private $_connection;
    private static $_instance;
    
    /**
     * Get an instance of the Database
     * */
     public static function getInstance() {
        if (!self::$_instance){
          self::$_instance = new self();  
        }
        return self::$_instance;
     }
    
    /**
     * Constructor
    */
    
    public function __construct() {
        try {
        $this->_connection = new PDO ('mysql:host=localhost;dbname=cmr;charset=utf8', 'cmr', 'WirelessDe', array(PDO::ATTR_EMULATE_PREPARES => false, 
                                                                                                PDO::ATTR_ERRMODE => PDO::ERRMODE_EXCEPTION));
        }
        catch (PDOException $e)
        {
            echo ("NU m-am putut conecta la Mysql -> ".$e->getMessage());
        }
    }
    
    private function __clone() {}
    
    /**
     * Get the connection
     */
     
    public function getConnection(){
        return $this->_connection;
    }
 }
