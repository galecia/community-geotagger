<?php

/**
 * @file
 * geotagger.default_openlayers_sources.inc
 */

/**
 * Implements hook_default_openlayers_sources().
 */
function geotagger_default_openlayers_sources() {
  $export = array();

  $ol_source = new stdClass();
  $ol_source->disabled = FALSE; /* Edit this to true to make a default ol_source disabled initially */
  $ol_source->api_version = 1;
  $ol_source->machine_name = 'views_geojson_places_feed_1';
  $ol_source->name = 'Views GeoJSON source: places_feed_1';
  $ol_source->description = 'This source is automatically generated. See View places at display feed_1';
  $ol_source->factory_service = 'openlayers.Source:GeoJSON';
  $ol_source->options = array(
    'url' => 'places.json',
  );
  $export['views_geojson_places_feed_1'] = $ol_source;

  return $export;
}
