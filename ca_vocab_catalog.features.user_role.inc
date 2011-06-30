<?php

/**
 * Implementation of hook_user_default_roles().
 */
function ca_vocab_catalog_user_default_roles() {
  $roles = array();

  // Exported role: vocab catalog administrator
  $roles['vocab catalog administrator'] = array(
    'name' => 'vocab catalog administrator',
  );

  return $roles;
}
