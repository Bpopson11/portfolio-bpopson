<?php
/**
 * @file
 * projects_update.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function projects_update_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function projects_update_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function projects_update_node_info() {
  $items = array(
    'projects' => array(
      'name' => t('Projects'),
      'base' => 'node_content',
      'description' => t('Examples of projects I have made or worked on. '),
      'has_title' => '1',
      'title_label' => t('Project Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
