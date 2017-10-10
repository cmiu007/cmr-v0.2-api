<?php
	
	class DBLogger
	{	
		
		private $DB;
		
		public function __construct( $db )
		{	
			$this->DB = $db;
			return;
		}
		/**
		 *   Log
		 *   $cine - utilizatorul care a facut modificarea
		 *   $actiune - adaugare/modificare
		 *   $data - ce date au fost adaugate/modificate
		 *   $cum - Cod Unic Medic
		 *   $ip - IP-ul de unde a fost facuta modificarea
		 *
		 */
		public function Log($cine, $cum, $actiune, $data, $ip)
		{
			$query='insert into log (cine, cum, actiune, data, ip) values ("'.$cine.'", "'.$cum.'", "'.$actiune.'", "'.$data.'", "'.$ip.'")';
			try{
				$stmt=$this->DB->query($query);
			}
			catch (PDOException $e)
				{			
					echo("Eroare DB".$e->getMessage());
					echo "\n ".$query;
					die();
				}
		}	
	}
?>