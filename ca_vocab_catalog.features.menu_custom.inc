<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function ca_vocab_catalog_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-ca-vocab-catalog-menu
  $menus['menu-ca-vocab-catalog-menu'] = array(
    'menu_name' => 'menu-ca-vocab-catalog-menu',
    'title' => 'Catalog',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Catalog');


  return $menus;
}
