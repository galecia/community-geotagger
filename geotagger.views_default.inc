<?php

/**
 * @file
 * geotagger.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function geotagger_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'places';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Places';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Places';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Address - Thoroughfare (i.e. Street address) */
  $handler->display->display_options['fields']['field_address_thoroughfare']['id'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_thoroughfare']['field'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['label'] = 'Address';
  /* Field: Content: Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['label'] = 'City';
  /* Field: Content: Address - Postal code */
  $handler->display->display_options['fields']['field_address_postal_code']['id'] = 'field_address_postal_code';
  $handler->display->display_options['fields']['field_address_postal_code']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_postal_code']['field'] = 'field_address_postal_code';
  $handler->display->display_options['fields']['field_address_postal_code']['label'] = 'ZIP';
  /* Field: Content: File(s) */
  $handler->display->display_options['fields']['field_file_s_']['id'] = 'field_file_s_';
  $handler->display->display_options['fields']['field_file_s_']['table'] = 'field_data_field_file_s_';
  $handler->display->display_options['fields']['field_file_s_']['field'] = 'field_file_s_';
  $handler->display->display_options['fields']['field_file_s_']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_file_s_']['type'] = 'file_table';
  $handler->display->display_options['fields']['field_file_s_']['delta_offset'] = '0';
  /* Field: Content: Image(s) */
  $handler->display->display_options['fields']['field_image_s_']['id'] = 'field_image_s_';
  $handler->display->display_options['fields']['field_image_s_']['table'] = 'field_data_field_image_s_';
  $handler->display->display_options['fields']['field_image_s_']['field'] = 'field_image_s_';
  $handler->display->display_options['fields']['field_image_s_']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_s_']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'file',
  );
  $handler->display->display_options['fields']['field_image_s_']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_image_s_']['multi_type'] = 'ul';
  /* Field: latitude */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['ui_name'] = 'latitude';
  $handler->display->display_options['fields']['field_location']['label'] = 'Latitude';
  $handler->display->display_options['fields']['field_location']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_location']['type'] = 'geofield_lat';
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  /* Field: longitude */
  $handler->display->display_options['fields']['field_location_1']['id'] = 'field_location_1';
  $handler->display->display_options['fields']['field_location_1']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location_1']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location_1']['ui_name'] = 'longitude';
  $handler->display->display_options['fields']['field_location_1']['label'] = 'Longitude';
  $handler->display->display_options['fields']['field_location_1']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_location_1']['type'] = 'geofield_lon';
  $handler->display->display_options['fields']['field_location_1']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'place' => 'place',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'places';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Places';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['entity_type'] = 'node';
  $handler->display->display_options['style_options']['data_source'] = 'field_location_2';
  $handler->display->display_options['style_options']['name_field'] = 'title';
  $handler->display->display_options['style_options']['description_field'] = '#rendered_entity';
  $handler->display->display_options['style_options']['view_mode'] = 'teaser';
  $handler->display->display_options['style_options']['map'] = 'OSM Mapnik';
  $handler->display->display_options['style_options']['height'] = '300';
  $handler->display->display_options['style_options']['hide_empty'] = 0;
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '-1';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '0';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '18';
  $handler->display->display_options['style_options']['icon']['iconUrl'] = '/sites/default/files/circle.png';
  $handler->display->display_options['style_options']['icon']['html'] = 'field_location_2';
  $handler->display->display_options['style_options']['icon']['htmlClass'] = 'marker-html-class';
  $handler->display->display_options['style_options']['vector_display']['stroke'] = 0;
  $handler->display->display_options['style_options']['vector_display']['fill'] = 0;
  $handler->display->display_options['style_options']['vector_display']['clickable'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Address - Thoroughfare (i.e. Street address) */
  $handler->display->display_options['fields']['field_address_thoroughfare']['id'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_thoroughfare']['field'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['label'] = 'Address';
  /* Field: Content: Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['label'] = 'City';
  /* Field: Content: Address - Postal code */
  $handler->display->display_options['fields']['field_address_postal_code']['id'] = 'field_address_postal_code';
  $handler->display->display_options['fields']['field_address_postal_code']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_postal_code']['field'] = 'field_address_postal_code';
  $handler->display->display_options['fields']['field_address_postal_code']['label'] = 'ZIP';
  /* Field: Content: File(s) */
  $handler->display->display_options['fields']['field_file_s_']['id'] = 'field_file_s_';
  $handler->display->display_options['fields']['field_file_s_']['table'] = 'field_data_field_file_s_';
  $handler->display->display_options['fields']['field_file_s_']['field'] = 'field_file_s_';
  $handler->display->display_options['fields']['field_file_s_']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_file_s_']['type'] = 'file_table';
  $handler->display->display_options['fields']['field_file_s_']['delta_offset'] = '0';
  /* Field: Content: Image(s) */
  $handler->display->display_options['fields']['field_image_s_']['id'] = 'field_image_s_';
  $handler->display->display_options['fields']['field_image_s_']['table'] = 'field_data_field_image_s_';
  $handler->display->display_options['fields']['field_image_s_']['field'] = 'field_image_s_';
  $handler->display->display_options['fields']['field_image_s_']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_s_']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'file',
  );
  $handler->display->display_options['fields']['field_image_s_']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_image_s_']['multi_type'] = 'ul';
  /* Field: latitude */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['ui_name'] = 'latitude';
  $handler->display->display_options['fields']['field_location']['label'] = 'Latitude';
  $handler->display->display_options['fields']['field_location']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_location']['type'] = 'geofield_lat';
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  /* Field: longitude */
  $handler->display->display_options['fields']['field_location_1']['id'] = 'field_location_1';
  $handler->display->display_options['fields']['field_location_1']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location_1']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location_1']['ui_name'] = 'longitude';
  $handler->display->display_options['fields']['field_location_1']['label'] = 'Longitude';
  $handler->display->display_options['fields']['field_location_1']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_location_1']['type'] = 'geofield_lon';
  $handler->display->display_options['fields']['field_location_1']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location_2']['id'] = 'field_location_2';
  $handler->display->display_options['fields']['field_location_2']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location_2']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location_2']['label'] = '';
  $handler->display->display_options['fields']['field_location_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_2']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_location_2']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'places/export.csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_geojson_feed';
  $handler->display->display_options['style_options']['data_source']['value'] = 'latlon';
  $handler->display->display_options['style_options']['data_source']['latitude'] = 'field_location';
  $handler->display->display_options['style_options']['data_source']['longitude'] = 'field_location_1';
  $handler->display->display_options['style_options']['data_source']['geofield'] = 'field_location';
  $handler->display->display_options['style_options']['data_source']['wkt'] = 'title';
  $handler->display->display_options['style_options']['data_source']['name_field'] = 'title';
  $handler->display->display_options['style_options']['data_source']['description_field'] = '';
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Address - Thoroughfare (i.e. Street address) */
  $handler->display->display_options['fields']['field_address_thoroughfare']['id'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_thoroughfare']['field'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['label'] = 'Address';
  /* Field: Content: Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['label'] = 'City';
  /* Field: Content: Address - Postal code */
  $handler->display->display_options['fields']['field_address_postal_code']['id'] = 'field_address_postal_code';
  $handler->display->display_options['fields']['field_address_postal_code']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_postal_code']['field'] = 'field_address_postal_code';
  $handler->display->display_options['fields']['field_address_postal_code']['label'] = 'ZIP';
  /* Field: Content: File(s) */
  $handler->display->display_options['fields']['field_file_s_']['id'] = 'field_file_s_';
  $handler->display->display_options['fields']['field_file_s_']['table'] = 'field_data_field_file_s_';
  $handler->display->display_options['fields']['field_file_s_']['field'] = 'field_file_s_';
  $handler->display->display_options['fields']['field_file_s_']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_file_s_']['type'] = 'file_table';
  $handler->display->display_options['fields']['field_file_s_']['delta_offset'] = '0';
  /* Field: Content: Image(s) */
  $handler->display->display_options['fields']['field_image_s_']['id'] = 'field_image_s_';
  $handler->display->display_options['fields']['field_image_s_']['table'] = 'field_data_field_image_s_';
  $handler->display->display_options['fields']['field_image_s_']['field'] = 'field_image_s_';
  $handler->display->display_options['fields']['field_image_s_']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_s_']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'file',
  );
  $handler->display->display_options['fields']['field_image_s_']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_image_s_']['multi_type'] = 'ul';
  /* Field: latitude */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['ui_name'] = 'latitude';
  $handler->display->display_options['fields']['field_location']['label'] = 'Latitude';
  $handler->display->display_options['fields']['field_location']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_location']['type'] = 'geofield_lat';
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  /* Field: longitude */
  $handler->display->display_options['fields']['field_location_1']['id'] = 'field_location_1';
  $handler->display->display_options['fields']['field_location_1']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location_1']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location_1']['ui_name'] = 'longitude';
  $handler->display->display_options['fields']['field_location_1']['label'] = 'Longitude';
  $handler->display->display_options['fields']['field_location_1']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_location_1']['type'] = 'geofield_lon';
  $handler->display->display_options['fields']['field_location_1']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  $handler->display->display_options['path'] = 'places.json';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'page' => 0,
  );
  $export['places'] = $view;

  return $export;
}
