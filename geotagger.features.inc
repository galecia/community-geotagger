<?php

/**
 * @file
 * geotagger.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function geotagger_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "openlayers" && $api == "default_openlayers_sources") {
    return array("version" => "1");
  }
  if ($module == "openlayers" && $api == "default_openlayers_styles") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function geotagger_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function geotagger_node_info() {
  $items = array(
    'place' => array(
      'name' => t('Place'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
