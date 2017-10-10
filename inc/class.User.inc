<?php

    class User{
        protected $nume;
        protected $cmj;
        protected $email;
        protected $telefon;
        
        public function __construct(){
            $nume = "";
            $cmj = "";
            $email = "";
            $telefon = "";
        }
        
        public function loadData($db,$id)
        {
            $query = "select nume, cmj, email, telefon from users where id=?";
            $stmt = $db->prepare($query);
            try{
                $stmt->execute($id);
            }
            catch (PDOException $e)
            {
                $result=array('result' => '01' , 'mesaj' => $e->getMessage());
                return($result);
            }
            $row = $stmt->fetch();
            $this->nume = $row['nume'];
            $this->cmj = $row['cmj'];
            $this->email = $row['email'];
            $this=>telefon = $row['telefon'];
        }
        
        public function getCmj()
        {
            return $this->cmj;
        }
        
        
        
        
    }