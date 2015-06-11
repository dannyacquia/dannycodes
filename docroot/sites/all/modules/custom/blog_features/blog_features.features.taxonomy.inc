<?php
/**
 * @file
 * blog_features.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function blog_features_taxonomy_default_vocabularies() {
  return array(
    'type_of_blog' => array(
      'name' => 'Type of Blog',
      'machine_name' => 'type_of_blog',
      'description' => 'subject type of blog',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
