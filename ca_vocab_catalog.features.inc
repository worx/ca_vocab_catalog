<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ca_vocab_catalog_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function ca_vocab_catalog_imagecache_default_presets() {
  $items = array(
    'ca_vocab_catalog_p_resize_45w_45h' => array(
      'presetname' => 'ca_vocab_catalog_p_resize_45w_45h',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_resize',
          'data' => array(
            'width' => '45',
            'height' => '45',
          ),
        ),
      ),
    ),
    'ca_vocab_catalog_p_scale_200w' => array(
      'presetname' => 'ca_vocab_catalog_p_scale_200w',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '200',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function ca_vocab_catalog_views_api() {
  return array(
    'api' => '2',
  );
}
