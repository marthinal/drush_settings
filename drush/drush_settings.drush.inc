<?php

/**
 * @file
 * Drush.
 */

/**
 * Implements hook_drush_command().
 */
function drush_settings_drush_command() {
  $items['get-settings'] = array(
    'description' => 'test.',
    'core' => array('8+'),
  );

  return $items;
}

/**
 * Implements the Drush command.
 */
function drush_drush_settings_get_settings() {
  $settings =  \Drupal::service('settings')->getInstance();
  print_r($settings->getAll());
}