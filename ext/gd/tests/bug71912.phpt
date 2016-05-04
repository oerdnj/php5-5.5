--TEST--
Bug #71912 (libgd: signedness vulnerability)
--SKIPIF--
<?php
        if(!extension_loaded('gd')){ die('skip gd extension not available'); }
        if(!function_exists('imagecreatefromgd2')) die('skip imagecreatefromgd2() not available');
?>
--FILE--
<?php
imagecreatefromgd2(__DIR__."/invalid_neg_size.gd2");
?>
OK
--EXPECTF--

Warning: imagecreatefromgd2(): '%s/invalid_neg_size.gd2' is not a valid GD2 file in %s/bug71912.php on line %d
OK