<?php
	/**
	 * Configuration file
	 * @author Antoine De Gieter
	 *
	 */

	session_start();

	require_once "lib/spdo.class.php";

	define("TITLE", "Odycircus - ");

	$allowedPages = array(
		"home",
		"validatePictures",
		"pictures",
		"circuses",
		"users",
		"events",
	);
