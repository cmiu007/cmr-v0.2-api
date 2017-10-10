<?php
$return_codes = [
    '00' => 'succes',                                // Operatiune terminata cu succes
    '01' => 'DB error',                              // Eroare acces la baza de date
    
    
    '10' => 'Auth error',                            // Eroare autentificare  userul nu exista sau parola gresita
    '12' => 'Token invalid',                         // Token invalid - nu exista sau este expirat
    '14' => 'Nu aveti acces in acest cmj',
    
    '20' => 'CNP exista',                            // CNP-ul exista
    
];



?>