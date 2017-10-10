<?php

class Medic{
    protected $id;
    protected $cnp;
    protected $cuim;
    protected $jud_id;
    protected $status;
    protected $data_juramant;
    protected $cod_parafa;
    protected $nume;
    protected $initiala;
    protected $prenume;
    protected $nume_ant;
    protected $cetatenie;
    protected $act_ident_tip_id;
    protected $act_ident_serie;
    protected $act_ident_nr;
    protected $act_ident_exp_date;
    protected $fac_absolv;
    protected $fac_promotie;
    protected $fac_dipl_serie;
    protected $fac_dipl_nr;
    protected $fac_dipl_data;
    protected $fac_dipl_adev;    
    
    public function __construct($db, $log, $id = null)
    {
        if ($id == null)
        {
            $this->id = 0;
            $this->cnp = "";
            $this->jud_id = 0;
            $this->cuim = "";
            $this->status = 0;
            $this->data_juramant = "";
            $this->cod_parafa = "";
            $this->nume = "";
            $this->initiala = "";
            $this->prenume = "";
            $this->nume_ant = "";
            $this->cetatenie = "";
            $this->act_ident_tip_id = "";
            $this->act_ident_serie = "";
            $this->act_ident_nr = "";
            $this->act_ident_exp_date = "";
            $this->fac_absolv = "";
            $this->fac_promotie = "";
            $this->fac_dipl_serie = "";
            $this->fac_dipl_nr = "";
            $this->fac_dipl_data = "";
            $this->fac_dipl_adev = "";  
        }
        else
        {
            try{
            $stmt = $db ->query('select * from mem where id = "'.$id.'"');
            }
            catch (PDOException $e)
            {
                $log->LogError("DB ERROR: ".$e->getMessage());
                die();
            }
            $row = $stmt->fetch();
            $this->id = $id;
            $this->cnp = $row['cnp'];
            $this->jud_id = $row['jud_id'];
            $this->cuim = $row['cuim'];
            $this->status = $row['status'];
            $this->data_juramant = $row['data_juramant'];
            $this->cod_parafa = $row['cod_parafa'];
            $this->nume = $row['nume'];
            $this->initiala = $row['initiala'];
            $this->prenume = $row['prenume'];
            $this->nume_ant = $row['nume_ant'];
            $this->cetatenie = $row['cetatenie'];
            $this->act_ident_tip_id = $row['act_ident_tip_id'];
            $this->act_ident_serie = $row['act_ident_serie'];
            $this->act_ident_nr = $row['act_ident_nr'];
            $this->act_ident_exp_date = $row['act_ident_exp_date'];
            $this->fac_absolv = $row['fac_absolv'];
            $this->fac_promotie = $row['promotie'];
            $this->fac_dipl_serie = $row['fac_dipl_serie'];
            $this->fac_dipl_nr = $row['fac_dipl_nr'];
            $this->fac_dipl_data = $row['fac_dipl_data'];
            $this->fac_dipl_adev = $row['fac_dipl_adev']; 
        }
        
    public function saveToDB($db,$log)
    {
        
    }
        
    }
    
    
    
    
}

?>