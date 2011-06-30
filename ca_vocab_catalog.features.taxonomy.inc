<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function ca_vocab_catalog_taxonomy_default_vocabularies() {
  return array(
    'ca_vocab_catalog_catalog' => array(
      'name' => 'Catalog',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '1',
      'multiple' => '1',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_ca_vocab_catalog_catalog',
      'weight' => '0',
      'nodes' => array(
        'product' => 'product',
      ),
    ),
  );
}
