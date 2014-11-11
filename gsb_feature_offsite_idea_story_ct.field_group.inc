<?php
/**
 * @file
 * gsb_feature_offsite_idea_story_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_offsite_idea_story_ct_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_alumni_story|node|offsite_idea_story|form';
  $field_group->group_name = 'group_alumni_story';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offsite_idea_story';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Alumni/Past Participant Mention',
    'weight' => '9',
    'children' => array(
      0 => 'field_alumni_story',
      1 => 'field_program_unlimited',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_alumni_story|node|offsite_idea_story|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_centers|node|offsite_idea_story|form';
  $field_group->group_name = 'group_centers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offsite_idea_story';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_taxonomy';
  $field_group->data = array(
    'label' => 'Centers',
    'weight' => '17',
    'children' => array(
      0 => 'field_centers_research_programs',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_centers|node|offsite_idea_story|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|offsite_idea_story|form';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offsite_idea_story';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_taxonomy';
  $field_group->data = array(
    'label' => 'Tags',
    'weight' => '18',
    'children' => array(
      0 => 'field_tag',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_tags|node|offsite_idea_story|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taxonomy|node|offsite_idea_story|form';
  $field_group->group_name = 'group_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offsite_idea_story';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tagging',
    'weight' => '10',
    'children' => array(
      0 => 'group_centers',
      1 => 'group_tags',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_taxonomy|node|offsite_idea_story|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_dek|node|offsite_idea_story|idea_story_latest_stories';
  $field_group->group_name = 'group_wrapper_dek';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offsite_idea_story';
  $field_group->mode = 'idea_story_latest_stories';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dek wrapper',
    'weight' => '2',
    'children' => array(
      0 => 'field_editorial_summary',
      1 => 'field_publisher',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Dek wrapper',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_dek|node|offsite_idea_story|idea_story_latest_stories'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_idea_story_text|node|offsite_idea_story|teaser';
  $field_group->group_name = 'group_wrapper_idea_story_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offsite_idea_story';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Offsite Idea Story text wrapper',
    'weight' => '2',
    'children' => array(
      0 => 'field_date',
      1 => 'field_editorial_summary',
      2 => 'field_key_taxonomy',
      3 => 'field_publisher',
      4 => 'group_wrapper_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Offsite Idea Story text wrapper',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_idea_story_text|node|offsite_idea_story|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_title|node|offsite_idea_story|idea_story_latest_stories';
  $field_group->group_name = 'group_wrapper_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offsite_idea_story';
  $field_group->mode = 'idea_story_latest_stories';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_link_single',
      1 => 'media_icon',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Title wrapper',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_title|node|offsite_idea_story|idea_story_latest_stories'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_title|node|offsite_idea_story|news_listing';
  $field_group->group_name = 'group_wrapper_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offsite_idea_story';
  $field_group->mode = 'news_listing';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_link_single',
      1 => 'media_icon',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Title wrapper',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_title|node|offsite_idea_story|news_listing'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_title|node|offsite_idea_story|teaser';
  $field_group->group_name = 'group_wrapper_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offsite_idea_story';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_wrapper_idea_story_text';
  $field_group->data = array(
    'label' => 'Title wrapper',
    'weight' => '4',
    'children' => array(
      0 => 'field_link_single',
      1 => 'media_icon',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Title wrapper',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_title|node|offsite_idea_story|teaser'] = $field_group;

  return $export;
}
