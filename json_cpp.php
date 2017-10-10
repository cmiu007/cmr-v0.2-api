<?php
$token = $_SESSION['jeton'];
/* mem_cpp_id se faloseste pentru edit */
// $mem_cpp_id = isset($_REQUEST['$mem_cpp_id']) ? $_REQUEST['$mem_cpp_id'] : '';
$mem_id_mem = if(isset($_REQUEST['$mem_id_mem'])) ? $_REQUEST['$mem_id_mem'] : ''; /* ID membru tabela mem */
$mem_cpp_id_mem = isset($_REQUEST['$mem_cpp_id_mem']) ? $_REQUEST[''] : ''; /* tabela mem_cpp */
$mem_cpp_reg_id_cpp = isset($_REQUEST['$mem_cpp_reg_id_cpp']) ? $_REQUEST[''] : ''; /* tabela mem_cpp */
$mem_cpp_reg_cpp_id = isset($_REQUEST['$mem_cpp_reg_cpp_id']) ? $_REQUEST[''] : ''; /* tabela mem_cpp */
$mem_cpp_id_grad_prof_cpp = isset($_REQUEST['$mem_cpp_id_grad_prof_cpp']) ? $_REQUEST[''] : ''; /* gr prof cpp */
$mem_cpp_date_start = isset($_REQUEST['$mem_cpp_date_start']) ? $_REQUEST[''] : ''; /* start cpp */
$mem_cpp_date_end = isset($_REQUEST['$mem_cpp_date_end']) ? $_REQUEST[''] : ''; /* end cpp */
$mem_cpp_emitent = isset($_REQUEST['$mem_cpp_emitent']) ? $_REQUEST[''] : ''; /* emitent MS, AL */
$mem_cpp_act_serie = isset($_REQUEST['$mem_cpp_act_serie']) ? $_REQUEST[''] : ''; /* serie cpp */
$mem_cpp_act_numar = isset($_REQUEST['$mem_cpp_act_numar']) ? $_REQUEST[''] : ''; /* numar cpp */
$mem_cpp_act_data = isset($_REQUEST['$mem_cpp_act_data']) ? $_REQUEST[''] : ''; /* data cpp */
$mem_cpp_act_descriere = isset($_REQUEST['$mem_cpp_act_descriere']) ? $_REQUEST[''] : ''; /* descriere cpp */
$mem_cpp_obs = isset($_REQUEST['$mem_cpp_obs']) ? $_REQUEST[''] : ''; /* liber cpp */

// 'cpp_id' => $, -> la adaugare nu se pune
//  dar se pune id-ul medicului la care se adauga cpp-ul

 $data = [
     'token' => $token,
     'actiune' => 'cpp',
     'data' => [
         'mem_id' => $mem_cpp_id_mem,
         'reg_cpp_tip_id' => $mem_cpp_reg_id_cpp,
         'reg_cpp_id' => $mem_cpp_reg_cpp_id,
         'grad_prof_cpp_id' => $mem_cpp_id_grad_prof_cpp,
         'date_start' => $mem_cpp_date_start,
         'date_end' => $mem_cpp_date_end,
         'emitent' => $mem_cpp_emitent,
         'act_serie' => $mem_cpp_act_serie,
         'act_numar' => $mem_cpp_act_numar,
         'act_data' => $mem_cpp_act_data,
         'act_descriere' => $mem_cpp_act_descriere,
         'obs' => $mem_cpp_obs,
     ],
 ];
