<?php
/**
 * @file
 * hk_admin.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hk_admin_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'admin';
  $view->description = 'Admintool für H+K, zur einfachen Bearbeitung von Objekten, Wohnungen und Seiten.';
  $view->tag = 'hk';
  $view->base_table = 'node';
  $view->human_name = 'Admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Inhalte';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none-debug';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Erweiterte Optionen',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_objektid_nunumeric_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_bezirk_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_select_all_none_nested' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'nid' => 'nid',
    'edit_node' => 'edit_node',
    'field_objektid_nunumeric' => 'field_objektid_nunumeric',
    'title' => 'title',
    'sid' => 'sid',
    'field_save_workflow' => 'field_save_workflow',
    'field_apart_no' => 'field_apart_no',
    'field_obj_apartments' => 'field_obj_apartments',
    'language' => 'language',
    'status' => 'status',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_objektid_nunumeric' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_save_workflow' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_apart_no' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_obj_apartments' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'language' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_obj_apartments_target_id']['id'] = 'field_obj_apartments_target_id';
  $handler->display->display_options['relationships']['field_obj_apartments_target_id']['table'] = 'field_data_field_obj_apartments';
  $handler->display->display_options['relationships']['field_obj_apartments_target_id']['field'] = 'field_obj_apartments_target_id';
  $handler->display->display_options['relationships']['field_obj_apartments_target_id']['label'] = 'Apartments';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Inhalt';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::workflow_vbo_next_state_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'title' => 'title',
          'language' => 'language',
          'status' => 'status',
          'page::body' => 'page::body',
          'page::title_field' => 'page::title_field',
          'objekt::field_address' => 'objekt::field_address',
          'objekt::field_ansprechpartner' => 'objekt::field_ansprechpartner',
          'objekt::field_bezirk' => 'objekt::field_bezirk',
          'objekt::field_developer' => 'objekt::field_developer',
          'objekt::field_heating_type' => 'objekt::field_heating_type',
          'objekt::field_kategorie' => 'objekt::field_kategorie',
          'objekt::field_moving_in_from' => 'objekt::field_moving_in_from',
          'objekt::field_no_of_floors' => 'objekt::field_no_of_floors',
          'objekt::field_obj_apartments' => 'objekt::field_obj_apartments',
          'objekt::field_object_description' => 'objekt::field_object_description',
          'objekt::field_object_images' => 'objekt::field_object_images',
          'objekt::field_object_location' => 'objekt::field_object_location',
          'objekt::field_object_other' => 'objekt::field_object_other',
          'objekt::field_objekt_wkt' => 'objekt::field_objekt_wkt',
          'objekt::field_objektid_nunumeric' => 'objekt::field_objektid_nunumeric',
          'objekt::field_rent_commission' => 'objekt::field_rent_commission',
          'objekt::field_sale_commission' => 'objekt::field_sale_commission',
          'objekt::field_status_quo' => 'objekt::field_status_quo',
          'objekt::field_topobjekt' => 'objekt::field_topobjekt',
          'objekt::field_wug_act_rent' => 'objekt::field_wug_act_rent',
          'objekt::field_wug_no_of_units' => 'objekt::field_wug_no_of_units',
          'objekt::field_wug_occupancy' => 'objekt::field_wug_occupancy',
          'objekt::field_wug_opt_constrruct' => 'objekt::field_wug_opt_constrruct',
          'objekt::field_wug_total_space' => 'objekt::field_wug_total_space',
          'objekt::field_year_built' => 'objekt::field_year_built',
          'objekt::title_field' => 'objekt::title_field',
          'objekt::field_object_txt_map_popup' => 'objekt::field_object_txt_map_popup',
          'objekt::field_objekt_energieausweistyp' => 'objekt::field_objekt_energieausweistyp',
          'objekt::field_objekt_energietraeger' => 'objekt::field_objekt_energietraeger',
          'objekt::field_objekt_endenergiebedarf' => 'objekt::field_objekt_endenergiebedarf',
          'objekt::field_objekt_effizienzklasse' => 'objekt::field_objekt_effizienzklasse',
          'objekt::field_save_workflow' => 'objekt::field_save_workflow',
          'apartment::field_apart_bathrooms' => 'apartment::field_apart_bathrooms',
          'apartment::field_apart_commission' => 'apartment::field_apart_commission',
          'apartment::field_apart_description' => 'apartment::field_apart_description',
          'apartment::field_apart_expose' => 'apartment::field_apart_expose',
          'apartment::field_apart_floor' => 'apartment::field_apart_floor',
          'apartment::field_apart_floor_plan' => 'apartment::field_apart_floor_plan',
          'apartment::field_apart_hoa_fee' => 'apartment::field_apart_hoa_fee',
          'apartment::field_apart_living_space' => 'apartment::field_apart_living_space',
          'apartment::field_apart_location' => 'apartment::field_apart_location',
          'apartment::field_apart_net_rent' => 'apartment::field_apart_net_rent',
          'apartment::field_apart_no' => 'apartment::field_apart_no',
          'apartment::field_apart_other' => 'apartment::field_apart_other',
          'apartment::field_apart_pictures' => 'apartment::field_apart_pictures',
          'apartment::field_apart_price' => 'apartment::field_apart_price',
          'apartment::field_apart_price_parking' => 'apartment::field_apart_price_parking',
          'apartment::field_apart_rate_of_return' => 'apartment::field_apart_rate_of_return',
          'apartment::field_apart_rooms' => 'apartment::field_apart_rooms',
          'apartment::field_apart_sleeping_rooms' => 'apartment::field_apart_sleeping_rooms',
          'apartment::field_apart_type' => 'apartment::field_apart_type',
          'apartment::field_ausstattung' => 'apartment::field_ausstattung',
          'apartment::field_kategorie' => 'apartment::field_kategorie',
          'apartment::field_moving_in_from' => 'apartment::field_moving_in_from',
          'apartment::field_object_ref' => 'apartment::field_object_ref',
          'apartment::title_field' => 'apartment::title_field',
          'apartment::field_save_workflow' => 'apartment::field_save_workflow',
        ),
      ),
    ),
    'action::node_save_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<a href="/node/[nid]/edit?destination=admin/dash" title="Objekt bearbeiten">bearbeiten</a> | <a href="/node/[nid]/translate?destination=admin/dash" title="Objekt übersetzen">übersetzen</a>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Objekt ID */
  $handler->display->display_options['fields']['field_objektid_nunumeric']['id'] = 'field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['table'] = 'field_data_field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['field'] = 'field_objektid_nunumeric';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Objekt';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="/node/[nid]?destination=/admin/content/dash" title="Objekt ansehen">[title]</a> | <a href="/node/[nid]/edit?destination=/admin/content/dash">Bearbeiten</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Status';
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  /* Field: Content: Save Workflow */
  $handler->display->display_options['fields']['field_save_workflow']['id'] = 'field_save_workflow';
  $handler->display->display_options['fields']['field_save_workflow']['table'] = 'field_data_field_save_workflow';
  $handler->display->display_options['fields']['field_save_workflow']['field'] = 'field_save_workflow';
  $handler->display->display_options['fields']['field_save_workflow']['relationship'] = 'field_obj_apartments_target_id';
  $handler->display->display_options['fields']['field_save_workflow']['label'] = 'Status';
  $handler->display->display_options['fields']['field_save_workflow']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_save_workflow']['element_label_colon'] = FALSE;
  /* Field: Content: Apartments */
  $handler->display->display_options['fields']['field_obj_apartments']['id'] = 'field_obj_apartments';
  $handler->display->display_options['fields']['field_obj_apartments']['table'] = 'field_data_field_obj_apartments';
  $handler->display->display_options['fields']['field_obj_apartments']['field'] = 'field_obj_apartments';
  $handler->display->display_options['fields']['field_obj_apartments']['alter']['text'] = '<a href="/node/[field_obj_apartments-target_id]?destination=/admin/content/dash" title="Wohnung ansehen">[field_obj_apartments]</a> | <a href="/node/[field_obj_apartments-target_id]/edit?destination=/admin/content/dash" title="Wohnung bearbeiten">bearbeiten</a> | [field_save_workflow]<!-- | <a href="/node/[field_obj_apartments-target_id]/translate?destination=/admin/content/dash" title="Wohnung übersetzen">übersetzen</a>-->';
  $handler->display->display_options['fields']['field_obj_apartments']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_obj_apartments']['alter']['path'] = 'node/[field_obj_apartments-target_id]/edit?destination=admin/content/dash';
  $handler->display->display_options['fields']['field_obj_apartments']['element_class'] = 'aparts';
  $handler->display->display_options['fields']['field_obj_apartments']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_obj_apartments']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_obj_apartments']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_obj_apartments']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_obj_apartments']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_obj_apartments']['multi_type'] = 'ul';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['exclude'] = TRUE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Veröffentlicht';
  $handler->display->display_options['fields']['status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last Changed';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'objekt' => 'objekt',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Objekt ID / Titel';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'field_objektid_nunumeric' => 'field_objektid_nunumeric',
    'title' => 'title',
  );
  /* Filter criterion: Content: Borough (field_bezirk) */
  $handler->display->display_options['filters']['field_bezirk_tid']['id'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['table'] = 'field_data_field_bezirk';
  $handler->display->display_options['filters']['field_bezirk_tid']['field'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_bezirk_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['operator_id'] = 'field_bezirk_tid_op';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['label'] = 'Bezirk';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['operator'] = 'field_bezirk_tid_op';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['identifier'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_bezirk_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_bezirk_tid']['vocabulary'] = 'vocabulary_3';
  $handler->display->display_options['filters']['field_bezirk_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Category (field_kategorie) */
  $handler->display->display_options['filters']['field_kategorie_tid']['id'] = 'field_kategorie_tid';
  $handler->display->display_options['filters']['field_kategorie_tid']['table'] = 'field_data_field_kategorie';
  $handler->display->display_options['filters']['field_kategorie_tid']['field'] = 'field_kategorie_tid';
  $handler->display->display_options['filters']['field_kategorie_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_kategorie_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['operator_id'] = 'field_kategorie_tid_op';
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['label'] = 'Kategorie';
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['operator'] = 'field_kategorie_tid_op';
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['identifier'] = 'field_kategorie_tid';
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_kategorie_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_kategorie_tid']['vocabulary'] = 'category';
  $handler->display->display_options['filters']['field_kategorie_tid']['hierarchy'] = 1;
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = '1';
  $handler->display->display_options['filters']['sid']['expose']['workflow_include_all'] = TRUE;
  $handler->display->display_options['merge_rows'] = TRUE;
  $handler->display->display_options['field_config'] = array(
    'views_bulk_operations' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'nid' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'edit_node' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'field_objektid_nunumeric' => array(
      'merge_option' => 'first_value',
      'separator' => ' ',
    ),
    'title' => array(
      'merge_option' => 'filter',
      'separator' => '',
    ),
    'sid' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'field_save_workflow' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'field_obj_apartments' => array(
      'merge_option' => 'first_value',
      'separator' => '',
    ),
    'language' => array(
      'merge_option' => 'filter',
      'separator' => '',
    ),
    'status' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'changed' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
  );

  /* Display: Inhalte */
  $handler = $view->new_display('page', 'Inhalte', 'dashboard');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Inhalt';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::workflow_vbo_next_state_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'title' => 'title',
          'language' => 'language',
          'status' => 'status',
          'page::body' => 'page::body',
          'page::title_field' => 'page::title_field',
          'objekt::field_address' => 'objekt::field_address',
          'objekt::field_ansprechpartner' => 'objekt::field_ansprechpartner',
          'objekt::field_bezirk' => 'objekt::field_bezirk',
          'objekt::field_developer' => 'objekt::field_developer',
          'objekt::field_heating_type' => 'objekt::field_heating_type',
          'objekt::field_kategorie' => 'objekt::field_kategorie',
          'objekt::field_moving_in_from' => 'objekt::field_moving_in_from',
          'objekt::field_no_of_floors' => 'objekt::field_no_of_floors',
          'objekt::field_obj_apartments' => 'objekt::field_obj_apartments',
          'objekt::field_object_description' => 'objekt::field_object_description',
          'objekt::field_object_images' => 'objekt::field_object_images',
          'objekt::field_object_location' => 'objekt::field_object_location',
          'objekt::field_object_other' => 'objekt::field_object_other',
          'objekt::field_objekt_wkt' => 'objekt::field_objekt_wkt',
          'objekt::field_objektid_nunumeric' => 'objekt::field_objektid_nunumeric',
          'objekt::field_rent_commission' => 'objekt::field_rent_commission',
          'objekt::field_sale_commission' => 'objekt::field_sale_commission',
          'objekt::field_status_quo' => 'objekt::field_status_quo',
          'objekt::field_topobjekt' => 'objekt::field_topobjekt',
          'objekt::field_wug_act_rent' => 'objekt::field_wug_act_rent',
          'objekt::field_wug_no_of_units' => 'objekt::field_wug_no_of_units',
          'objekt::field_wug_occupancy' => 'objekt::field_wug_occupancy',
          'objekt::field_wug_opt_constrruct' => 'objekt::field_wug_opt_constrruct',
          'objekt::field_wug_total_space' => 'objekt::field_wug_total_space',
          'objekt::field_year_built' => 'objekt::field_year_built',
          'objekt::title_field' => 'objekt::title_field',
          'objekt::field_object_txt_map_popup' => 'objekt::field_object_txt_map_popup',
          'objekt::field_objekt_energieausweistyp' => 'objekt::field_objekt_energieausweistyp',
          'objekt::field_objekt_energietraeger' => 'objekt::field_objekt_energietraeger',
          'objekt::field_objekt_endenergiebedarf' => 'objekt::field_objekt_endenergiebedarf',
          'objekt::field_objekt_effizienzklasse' => 'objekt::field_objekt_effizienzklasse',
          'objekt::field_save_workflow' => 'objekt::field_save_workflow',
          'apartment::field_apart_bathrooms' => 'apartment::field_apart_bathrooms',
          'apartment::field_apart_commission' => 'apartment::field_apart_commission',
          'apartment::field_apart_description' => 'apartment::field_apart_description',
          'apartment::field_apart_expose' => 'apartment::field_apart_expose',
          'apartment::field_apart_floor' => 'apartment::field_apart_floor',
          'apartment::field_apart_floor_plan' => 'apartment::field_apart_floor_plan',
          'apartment::field_apart_hoa_fee' => 'apartment::field_apart_hoa_fee',
          'apartment::field_apart_living_space' => 'apartment::field_apart_living_space',
          'apartment::field_apart_location' => 'apartment::field_apart_location',
          'apartment::field_apart_net_rent' => 'apartment::field_apart_net_rent',
          'apartment::field_apart_no' => 'apartment::field_apart_no',
          'apartment::field_apart_other' => 'apartment::field_apart_other',
          'apartment::field_apart_pictures' => 'apartment::field_apart_pictures',
          'apartment::field_apart_price' => 'apartment::field_apart_price',
          'apartment::field_apart_price_parking' => 'apartment::field_apart_price_parking',
          'apartment::field_apart_rate_of_return' => 'apartment::field_apart_rate_of_return',
          'apartment::field_apart_rooms' => 'apartment::field_apart_rooms',
          'apartment::field_apart_sleeping_rooms' => 'apartment::field_apart_sleeping_rooms',
          'apartment::field_apart_type' => 'apartment::field_apart_type',
          'apartment::field_ausstattung' => 'apartment::field_ausstattung',
          'apartment::field_kategorie' => 'apartment::field_kategorie',
          'apartment::field_moving_in_from' => 'apartment::field_moving_in_from',
          'apartment::field_object_ref' => 'apartment::field_object_ref',
          'apartment::title_field' => 'apartment::title_field',
          'apartment::field_save_workflow' => 'apartment::field_save_workflow',
        ),
      ),
    ),
    'action::node_save_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<a href="/node/[nid]/edit?destination=admin/dash" title="Objekt bearbeiten">bearbeiten</a> | <a href="/node/[nid]/translate?destination=admin/dash" title="Objekt übersetzen">übersetzen</a>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Objekt ID */
  $handler->display->display_options['fields']['field_objektid_nunumeric']['id'] = 'field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['table'] = 'field_data_field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['field'] = 'field_objektid_nunumeric';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Objekt';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="/node/[nid]?destination=/admin/content/dash" title="Objekt ansehen">[title]</a> | <a href="/node/[nid]/edit?destination=/admin/content/dash">Bearbeiten</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Status';
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  /* Field: Content: Save Workflow */
  $handler->display->display_options['fields']['field_save_workflow']['id'] = 'field_save_workflow';
  $handler->display->display_options['fields']['field_save_workflow']['table'] = 'field_data_field_save_workflow';
  $handler->display->display_options['fields']['field_save_workflow']['field'] = 'field_save_workflow';
  $handler->display->display_options['fields']['field_save_workflow']['relationship'] = 'field_obj_apartments_target_id';
  $handler->display->display_options['fields']['field_save_workflow']['label'] = 'Status';
  $handler->display->display_options['fields']['field_save_workflow']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_save_workflow']['element_label_colon'] = FALSE;
  /* Field: Content: Apartment No. */
  $handler->display->display_options['fields']['field_apart_no']['id'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['table'] = 'field_data_field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['field'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['relationship'] = 'field_obj_apartments_target_id';
  $handler->display->display_options['fields']['field_apart_no']['label'] = 'Nr.';
  $handler->display->display_options['fields']['field_apart_no']['element_label_colon'] = FALSE;
  /* Field: Content: Apartments */
  $handler->display->display_options['fields']['field_obj_apartments']['id'] = 'field_obj_apartments';
  $handler->display->display_options['fields']['field_obj_apartments']['table'] = 'field_data_field_obj_apartments';
  $handler->display->display_options['fields']['field_obj_apartments']['field'] = 'field_obj_apartments';
  $handler->display->display_options['fields']['field_obj_apartments']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_obj_apartments']['alter']['text'] = '<a href="/node/[field_obj_apartments-target_id]?destination=/admin/content/dash" title="Wohnung ansehen">[field_obj_apartments]</a> | <a href="/node/[field_obj_apartments-target_id]/edit?destination=/admin/content/dash" title="Wohnung bearbeiten">bearbeiten</a> | [field_save_workflow]<!-- | <a href="/node/[field_obj_apartments-target_id]/translate?destination=/admin/content/dash" title="Wohnung übersetzen">übersetzen</a>-->';
  $handler->display->display_options['fields']['field_obj_apartments']['alter']['path'] = 'node/[field_obj_apartments-target_id]/edit?destination=admin/content/dash';
  $handler->display->display_options['fields']['field_obj_apartments']['element_class'] = 'aparts';
  $handler->display->display_options['fields']['field_obj_apartments']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_obj_apartments']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_obj_apartments']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_obj_apartments']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_obj_apartments']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_obj_apartments']['multi_type'] = 'ul';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['exclude'] = TRUE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Veröffentlicht';
  $handler->display->display_options['fields']['status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last Changed';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['merge_rows'] = TRUE;
  $handler->display->display_options['field_config'] = array(
    'views_bulk_operations' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'nid' => array(
      'merge_option' => 'filter',
      'separator' => ', ',
    ),
    'edit_node' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'field_objektid_nunumeric' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'title' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'sid' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'field_save_workflow' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'field_obj_apartments' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'language' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'status' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'changed' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'field_apart_no' => array(
      'merge_option' => 'merge_unique',
      'separator' => '<br />',
    ),
  );
  $handler->display->display_options['path'] = 'admin/content/dash';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Inhalte';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Dashboard';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'menu-admin-menu';

  /* Display: Admin Objekte */
  $handler = $view->new_display('page', 'Admin Objekte', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Admin Objekte';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Inhalt';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::workflow_vbo_next_state_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'title' => 'title',
          'language' => 'language',
          'status' => 'status',
          'page::body' => 'page::body',
          'page::title_field' => 'page::title_field',
          'objekt::field_address' => 'objekt::field_address',
          'objekt::field_ansprechpartner' => 'objekt::field_ansprechpartner',
          'objekt::field_bezirk' => 'objekt::field_bezirk',
          'objekt::field_developer' => 'objekt::field_developer',
          'objekt::field_heating_type' => 'objekt::field_heating_type',
          'objekt::field_kategorie' => 'objekt::field_kategorie',
          'objekt::field_moving_in_from' => 'objekt::field_moving_in_from',
          'objekt::field_no_of_floors' => 'objekt::field_no_of_floors',
          'objekt::field_obj_apartments' => 'objekt::field_obj_apartments',
          'objekt::field_object_description' => 'objekt::field_object_description',
          'objekt::field_object_images' => 'objekt::field_object_images',
          'objekt::field_object_location' => 'objekt::field_object_location',
          'objekt::field_object_other' => 'objekt::field_object_other',
          'objekt::field_objekt_wkt' => 'objekt::field_objekt_wkt',
          'objekt::field_objektid_nunumeric' => 'objekt::field_objektid_nunumeric',
          'objekt::field_rent_commission' => 'objekt::field_rent_commission',
          'objekt::field_sale_commission' => 'objekt::field_sale_commission',
          'objekt::field_status_quo' => 'objekt::field_status_quo',
          'objekt::field_topobjekt' => 'objekt::field_topobjekt',
          'objekt::field_wug_act_rent' => 'objekt::field_wug_act_rent',
          'objekt::field_wug_no_of_units' => 'objekt::field_wug_no_of_units',
          'objekt::field_wug_occupancy' => 'objekt::field_wug_occupancy',
          'objekt::field_wug_opt_constrruct' => 'objekt::field_wug_opt_constrruct',
          'objekt::field_wug_total_space' => 'objekt::field_wug_total_space',
          'objekt::field_year_built' => 'objekt::field_year_built',
          'objekt::title_field' => 'objekt::title_field',
          'objekt::field_object_txt_map_popup' => 'objekt::field_object_txt_map_popup',
          'objekt::field_objekt_energieausweistyp' => 'objekt::field_objekt_energieausweistyp',
          'objekt::field_objekt_energietraeger' => 'objekt::field_objekt_energietraeger',
          'objekt::field_objekt_endenergiebedarf' => 'objekt::field_objekt_endenergiebedarf',
          'objekt::field_objekt_effizienzklasse' => 'objekt::field_objekt_effizienzklasse',
          'objekt::field_save_workflow' => 'objekt::field_save_workflow',
          'apartment::field_apart_bathrooms' => 'apartment::field_apart_bathrooms',
          'apartment::field_apart_commission' => 'apartment::field_apart_commission',
          'apartment::field_apart_description' => 'apartment::field_apart_description',
          'apartment::field_apart_expose' => 'apartment::field_apart_expose',
          'apartment::field_apart_floor' => 'apartment::field_apart_floor',
          'apartment::field_apart_floor_plan' => 'apartment::field_apart_floor_plan',
          'apartment::field_apart_hoa_fee' => 'apartment::field_apart_hoa_fee',
          'apartment::field_apart_living_space' => 'apartment::field_apart_living_space',
          'apartment::field_apart_location' => 'apartment::field_apart_location',
          'apartment::field_apart_net_rent' => 'apartment::field_apart_net_rent',
          'apartment::field_apart_no' => 'apartment::field_apart_no',
          'apartment::field_apart_other' => 'apartment::field_apart_other',
          'apartment::field_apart_pictures' => 'apartment::field_apart_pictures',
          'apartment::field_apart_price' => 'apartment::field_apart_price',
          'apartment::field_apart_price_parking' => 'apartment::field_apart_price_parking',
          'apartment::field_apart_rate_of_return' => 'apartment::field_apart_rate_of_return',
          'apartment::field_apart_rooms' => 'apartment::field_apart_rooms',
          'apartment::field_apart_sleeping_rooms' => 'apartment::field_apart_sleeping_rooms',
          'apartment::field_apart_type' => 'apartment::field_apart_type',
          'apartment::field_ausstattung' => 'apartment::field_ausstattung',
          'apartment::field_kategorie' => 'apartment::field_kategorie',
          'apartment::field_moving_in_from' => 'apartment::field_moving_in_from',
          'apartment::field_object_ref' => 'apartment::field_object_ref',
          'apartment::title_field' => 'apartment::title_field',
          'apartment::field_save_workflow' => 'apartment::field_save_workflow',
        ),
      ),
    ),
    'action::node_save_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<a href="/node/[nid]/edit?destination=admin/dash" title="Objekt bearbeiten">bearbeiten</a> | <a href="/node/[nid]/translate?destination=admin/dash" title="Objekt übersetzen">übersetzen</a>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Objekt ID */
  $handler->display->display_options['fields']['field_objektid_nunumeric']['id'] = 'field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['table'] = 'field_data_field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['field'] = 'field_objektid_nunumeric';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Objekt';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="/node/[nid]?destination=/admin/content/dash" title="Objekt ansehen">[title]</a> | <a href="/node/[nid]/edit?destination=/admin/content/dash">Bearbeiten</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Status';
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  /* Field: Content: Save Workflow */
  $handler->display->display_options['fields']['field_save_workflow']['id'] = 'field_save_workflow';
  $handler->display->display_options['fields']['field_save_workflow']['table'] = 'field_data_field_save_workflow';
  $handler->display->display_options['fields']['field_save_workflow']['field'] = 'field_save_workflow';
  $handler->display->display_options['fields']['field_save_workflow']['relationship'] = 'field_obj_apartments_target_id';
  $handler->display->display_options['fields']['field_save_workflow']['label'] = 'Status';
  $handler->display->display_options['fields']['field_save_workflow']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_save_workflow']['element_label_colon'] = FALSE;
  /* Field: Content: Apartment No. */
  $handler->display->display_options['fields']['field_apart_no']['id'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['table'] = 'field_data_field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['field'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['relationship'] = 'field_obj_apartments_target_id';
  $handler->display->display_options['fields']['field_apart_no']['label'] = 'Nr';
  /* Field: Content: Apartments */
  $handler->display->display_options['fields']['field_obj_apartments']['id'] = 'field_obj_apartments';
  $handler->display->display_options['fields']['field_obj_apartments']['table'] = 'field_data_field_obj_apartments';
  $handler->display->display_options['fields']['field_obj_apartments']['field'] = 'field_obj_apartments';
  $handler->display->display_options['fields']['field_obj_apartments']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_obj_apartments']['alter']['text'] = '<a href="/node/[field_obj_apartments-target_id]?destination=/admin/content/dash" title="Wohnung ansehen">[field_obj_apartments]</a> | <a href="/node/[field_obj_apartments-target_id]/edit?destination=/admin/content/dash" title="Wohnung bearbeiten">bearbeiten</a> | [field_save_workflow]<!-- | <a href="/node/[field_obj_apartments-target_id]/translate?destination=/admin/content/dash" title="Wohnung übersetzen">übersetzen</a>-->';
  $handler->display->display_options['fields']['field_obj_apartments']['alter']['path'] = 'node/[field_obj_apartments-target_id]/edit?destination=admin/content/dash';
  $handler->display->display_options['fields']['field_obj_apartments']['element_class'] = 'aparts';
  $handler->display->display_options['fields']['field_obj_apartments']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_obj_apartments']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_obj_apartments']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_obj_apartments']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_obj_apartments']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_obj_apartments']['multi_type'] = 'ul';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = 'Sprache';
  $handler->display->display_options['fields']['language']['exclude'] = TRUE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Veröffentlicht';
  $handler->display->display_options['fields']['status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Letze Änderung';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['merge_rows'] = TRUE;
  $handler->display->display_options['field_config'] = array(
    'views_bulk_operations' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'nid' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'edit_node' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'field_objektid_nunumeric' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'title' => array(
      'merge_option' => 'filter',
      'separator' => ', ',
    ),
    'sid' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'field_save_workflow' => array(
      'merge_option' => 'first_value',
      'separator' => '',
    ),
    'field_obj_apartments' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'language' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'status' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'changed' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'field_apart_no' => array(
      'merge_option' => 'merge_unique',
      'separator' => '<br />',
    ),
  );
  $handler->display->display_options['path'] = 'admin/content/dash/objekte';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Objekte';
  $handler->display->display_options['menu']['weight'] = '-10';
  $handler->display->display_options['menu']['name'] = 'menu-admin-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['title'] = 'Objekte';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'menu-admin-menu';

  /* Display: Admin Objekte Quickedit */
  $handler = $view->new_display('page', 'Admin Objekte Quickedit', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Admin Objekte';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'edit_node' => 'edit_node',
    'field_objektid_nunumeric_editable' => 'field_objektid_nunumeric_editable',
    'title_editable' => 'title_editable',
    'field_bezirk_editable' => 'field_bezirk_editable',
    'field_kategorie_editable' => 'field_kategorie_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_objektid_nunumeric_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'title_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_bezirk_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_kategorie_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['style_options']['save_messages'] = 'summary';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<a href="/node/[nid]/edit?destination=admin/dash" title="Objekt bearbeiten">bearbeiten</a> | <a href="/node/[nid]/translate?destination=admin/dash" title="Objekt übersetzen">übersetzen</a>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Objekt ID (editable) */
  $handler->display->display_options['fields']['field_objektid_nunumeric_editable']['id'] = 'field_objektid_nunumeric_editable';
  $handler->display->display_options['fields']['field_objektid_nunumeric_editable']['table'] = 'field_data_field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric_editable']['field'] = 'field_objektid_nunumeric_editable';
  $handler->display->display_options['fields']['field_objektid_nunumeric_editable']['label'] = 'Objekt ID';
  $handler->display->display_options['fields']['field_objektid_nunumeric_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_objektid_nunumeric_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_objektid_nunumeric_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_objektid_nunumeric_editable']['suppress_description'] = 1;
  /* Field: Content: Title (editable) */
  $handler->display->display_options['fields']['title_editable']['id'] = 'title_editable';
  $handler->display->display_options['fields']['title_editable']['table'] = 'node';
  $handler->display->display_options['fields']['title_editable']['field'] = 'title_editable';
  $handler->display->display_options['fields']['title_editable']['label'] = '';
  $handler->display->display_options['fields']['title_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_editable']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title_editable']['textfield_size'] = '75';
  /* Field: Content: Borough (editable) */
  $handler->display->display_options['fields']['field_bezirk_editable']['id'] = 'field_bezirk_editable';
  $handler->display->display_options['fields']['field_bezirk_editable']['table'] = 'field_data_field_bezirk';
  $handler->display->display_options['fields']['field_bezirk_editable']['field'] = 'field_bezirk_editable';
  $handler->display->display_options['fields']['field_bezirk_editable']['label'] = 'Borough';
  $handler->display->display_options['fields']['field_bezirk_editable']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_bezirk_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_bezirk_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_bezirk_editable']['suppress_description'] = 1;
  /* Field: Content: Category (editable) */
  $handler->display->display_options['fields']['field_kategorie_editable']['id'] = 'field_kategorie_editable';
  $handler->display->display_options['fields']['field_kategorie_editable']['table'] = 'field_data_field_kategorie';
  $handler->display->display_options['fields']['field_kategorie_editable']['field'] = 'field_kategorie_editable';
  $handler->display->display_options['fields']['field_kategorie_editable']['label'] = 'Category';
  $handler->display->display_options['fields']['field_kategorie_editable']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_kategorie_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_kategorie_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_kategorie_editable']['suppress_description'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'admin/content/dash/objekte/quick';
  $handler->display->display_options['menu']['title'] = 'Quickedit';
  $handler->display->display_options['menu']['weight'] = '-10';
  $handler->display->display_options['menu']['name'] = 'menu-admin-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Objekte';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Admin Wohnungen */
  $handler = $view->new_display('page', 'Admin Wohnungen', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Admin Dashboard Wohnungen';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Inhalt';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::workflow_vbo_next_state_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_create_pdf_expose' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'PDF Exposé erstellen',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'title' => 'title',
          'language' => 'language',
          'status' => 'status',
          'page::body' => 'page::body',
          'page::title_field' => 'page::title_field',
          'objekt::field_address' => 'objekt::field_address',
          'objekt::field_ansprechpartner' => 'objekt::field_ansprechpartner',
          'objekt::field_bezirk' => 'objekt::field_bezirk',
          'objekt::field_developer' => 'objekt::field_developer',
          'objekt::field_heating_type' => 'objekt::field_heating_type',
          'objekt::field_kategorie' => 'objekt::field_kategorie',
          'objekt::field_moving_in_from' => 'objekt::field_moving_in_from',
          'objekt::field_no_of_floors' => 'objekt::field_no_of_floors',
          'objekt::field_obj_apartments' => 'objekt::field_obj_apartments',
          'objekt::field_object_desc_commercial' => 'objekt::field_object_desc_commercial',
          'objekt::field_object_description' => 'objekt::field_object_description',
          'objekt::field_object_description_invest' => 'objekt::field_object_description_invest',
          'objekt::field_object_images' => 'objekt::field_object_images',
          'objekt::field_object_location' => 'objekt::field_object_location',
          'objekt::field_object_other' => 'objekt::field_object_other',
          'objekt::field_objekt_wkt' => 'objekt::field_objekt_wkt',
          'objekt::field_objektid_nunumeric' => 'objekt::field_objektid_nunumeric',
          'objekt::field_rent_commission' => 'objekt::field_rent_commission',
          'objekt::field_sale_commission' => 'objekt::field_sale_commission',
          'objekt::field_status_quo' => 'objekt::field_status_quo',
          'objekt::field_topobjekt' => 'objekt::field_topobjekt',
          'objekt::field_wug_act_rent' => 'objekt::field_wug_act_rent',
          'objekt::field_wug_no_of_units' => 'objekt::field_wug_no_of_units',
          'objekt::field_wug_occupancy' => 'objekt::field_wug_occupancy',
          'objekt::field_wug_opt_constrruct' => 'objekt::field_wug_opt_constrruct',
          'objekt::field_wug_total_space' => 'objekt::field_wug_total_space',
          'objekt::field_year_built' => 'objekt::field_year_built',
          'objekt::title_field' => 'objekt::title_field',
          'objekt::field_object_txt_map_popup' => 'objekt::field_object_txt_map_popup',
          'objekt::field_objekt_energieausweistyp' => 'objekt::field_objekt_energieausweistyp',
          'objekt::field_objekt_energietraeger' => 'objekt::field_objekt_energietraeger',
          'objekt::field_objekt_endenergiebedarf' => 'objekt::field_objekt_endenergiebedarf',
          'objekt::field_objekt_effizienzklasse' => 'objekt::field_objekt_effizienzklasse',
          'objekt::field_save_workflow' => 'objekt::field_save_workflow',
          'apartment::field_apart_bathrooms' => 'apartment::field_apart_bathrooms',
          'apartment::field_apart_commission' => 'apartment::field_apart_commission',
          'apartment::field_apart_description' => 'apartment::field_apart_description',
          'apartment::field_apart_expose' => 'apartment::field_apart_expose',
          'apartment::field_apart_floor' => 'apartment::field_apart_floor',
          'apartment::field_apart_floor_plan' => 'apartment::field_apart_floor_plan',
          'apartment::field_apart_hoa_fee' => 'apartment::field_apart_hoa_fee',
          'apartment::field_apart_living_space' => 'apartment::field_apart_living_space',
          'apartment::field_apart_location' => 'apartment::field_apart_location',
          'apartment::field_apart_net_rent' => 'apartment::field_apart_net_rent',
          'apartment::field_apart_no' => 'apartment::field_apart_no',
          'apartment::field_apart_other' => 'apartment::field_apart_other',
          'apartment::field_apart_pictures' => 'apartment::field_apart_pictures',
          'apartment::field_apart_price' => 'apartment::field_apart_price',
          'apartment::field_apart_price_parking' => 'apartment::field_apart_price_parking',
          'apartment::field_apart_rate_of_return' => 'apartment::field_apart_rate_of_return',
          'apartment::field_apart_rooms' => 'apartment::field_apart_rooms',
          'apartment::field_apart_sleeping_rooms' => 'apartment::field_apart_sleeping_rooms',
          'apartment::field_apart_type' => 'apartment::field_apart_type',
          'apartment::field_ausstattung' => 'apartment::field_ausstattung',
          'apartment::field_kategorie' => 'apartment::field_kategorie',
          'apartment::field_moving_in_from' => 'apartment::field_moving_in_from',
          'apartment::field_object_ref' => 'apartment::field_object_ref',
          'apartment::title_field' => 'apartment::title_field',
          'apartment::field_save_workflow' => 'apartment::field_save_workflow',
        ),
      ),
    ),
    'action::node_save_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Objekt ID */
  $handler->display->display_options['fields']['field_objektid_nunumeric']['id'] = 'field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['table'] = 'field_data_field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['field'] = 'field_objektid_nunumeric';
  /* Field: Content: Apartment No. */
  $handler->display->display_options['fields']['field_apart_no']['id'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['table'] = 'field_data_field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['field'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['label'] = 'Nr.';
  /* Field: Content: Titel */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['text'] = '<a href="/node/[nid]" title="Wohnung ansehen">[title_field]</a> | <a href="/node/[nid]/edit?destination=/admin/content/dash/wohnungen">Bearbeiten</a><!-- | <a href="/node/[nid]/translate?destination=/admin/content/dash/wohnungen">Übersetzen</a>-->';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = 'Sprache';
  $handler->display->display_options['fields']['language']['exclude'] = TRUE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Veröffentlicht';
  $handler->display->display_options['fields']['status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Status';
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Letze Änderung';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apartment' => 'apartment',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Objekt ID / Titel';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'field_objektid_nunumeric' => 'field_objektid_nunumeric',
    'title_field' => 'title_field',
  );
  /* Filter criterion: Content: Borough (field_bezirk) */
  $handler->display->display_options['filters']['field_bezirk_tid']['id'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['table'] = 'field_data_field_bezirk';
  $handler->display->display_options['filters']['field_bezirk_tid']['field'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_bezirk_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['operator_id'] = 'field_bezirk_tid_op';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['label'] = 'Bezirk';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['operator'] = 'field_bezirk_tid_op';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['identifier'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_bezirk_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_bezirk_tid']['vocabulary'] = 'vocabulary_3';
  $handler->display->display_options['filters']['field_bezirk_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Category (field_kategorie) */
  $handler->display->display_options['filters']['field_kategorie_tid']['id'] = 'field_kategorie_tid';
  $handler->display->display_options['filters']['field_kategorie_tid']['table'] = 'field_data_field_kategorie';
  $handler->display->display_options['filters']['field_kategorie_tid']['field'] = 'field_kategorie_tid';
  $handler->display->display_options['filters']['field_kategorie_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_kategorie_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['operator_id'] = 'field_kategorie_tid_op';
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['label'] = 'Kategorie';
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['operator'] = 'field_kategorie_tid_op';
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['identifier'] = 'field_kategorie_tid';
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_kategorie_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_kategorie_tid']['vocabulary'] = 'category';
  $handler->display->display_options['filters']['field_kategorie_tid']['hierarchy'] = 1;
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = '1';
  $handler->display->display_options['filters']['sid']['expose']['workflow_include_all'] = TRUE;
  $handler->display->display_options['path'] = 'admin/content/dash/wohnungen';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Wohnungen';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-admin-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Admin Wohnungen Quickedit */
  $handler = $view->new_display('page', 'Admin Wohnungen Quickedit', 'wohnungen');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Admin Wohnungen';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none-accelerated';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_objektid_nunumeric' => 'field_objektid_nunumeric',
    'field_apart_no' => 'field_apart_no',
    'title' => 'title',
    'title_field_editable' => 'title_field_editable',
    'field_apart_price' => 'field_apart_price',
    'field_apart_price_editable' => 'field_apart_price_editable',
    'field_kategorie_editable' => 'field_kategorie_editable',
    'field_bezirk_editable' => 'field_bezirk_editable',
    'field_ausstattung_editable' => 'field_ausstattung_editable',
    'language' => 'language',
    'status' => 'status',
    'changed' => 'changed',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_objektid_nunumeric' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_apart_no' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'title_field_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_apart_price' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_apart_price_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_kategorie_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bezirk_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ausstattung_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'language' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['style_options']['save_messages'] = 'summary';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Objekt ID */
  $handler->display->display_options['fields']['field_objektid_nunumeric']['id'] = 'field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['table'] = 'field_data_field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['field'] = 'field_objektid_nunumeric';
  /* Field: Content: Apartment No. */
  $handler->display->display_options['fields']['field_apart_no']['id'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['table'] = 'field_data_field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['field'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['label'] = 'Nr.';
  /* Field: Content: Titel */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Fittings (editable) */
  $handler->display->display_options['fields']['field_ausstattung_editable']['id'] = 'field_ausstattung_editable';
  $handler->display->display_options['fields']['field_ausstattung_editable']['table'] = 'field_data_field_ausstattung';
  $handler->display->display_options['fields']['field_ausstattung_editable']['field'] = 'field_ausstattung_editable';
  $handler->display->display_options['fields']['field_ausstattung_editable']['label'] = 'Ausstattung';
  $handler->display->display_options['fields']['field_ausstattung_editable']['type'] = 'ds_taxonomy_view_mode';
  $handler->display->display_options['fields']['field_ausstattung_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ausstattung_editable']['widget_type'] = 'autocomplete_deluxe_taxonomy';
  $handler->display->display_options['fields']['field_ausstattung_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_ausstattung_editable']['suppress_description'] = 0;
  /* Field: Content: Purchasing price (editable) */
  $handler->display->display_options['fields']['field_apart_price_editable']['id'] = 'field_apart_price_editable';
  $handler->display->display_options['fields']['field_apart_price_editable']['table'] = 'field_data_field_apart_price';
  $handler->display->display_options['fields']['field_apart_price_editable']['field'] = 'field_apart_price_editable';
  $handler->display->display_options['fields']['field_apart_price_editable']['label'] = 'Preis';
  $handler->display->display_options['fields']['field_apart_price_editable']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_apart_price_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_apart_price_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_apart_price_editable']['suppress_description'] = 0;
  /* Field: Content: Category (editable) */
  $handler->display->display_options['fields']['field_kategorie_editable']['id'] = 'field_kategorie_editable';
  $handler->display->display_options['fields']['field_kategorie_editable']['table'] = 'field_data_field_kategorie';
  $handler->display->display_options['fields']['field_kategorie_editable']['field'] = 'field_kategorie_editable';
  $handler->display->display_options['fields']['field_kategorie_editable']['label'] = 'Category';
  $handler->display->display_options['fields']['field_kategorie_editable']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_kategorie_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_kategorie_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_kategorie_editable']['suppress_description'] = 0;
  /* Field: Content: Borough (editable) */
  $handler->display->display_options['fields']['field_bezirk_editable']['id'] = 'field_bezirk_editable';
  $handler->display->display_options['fields']['field_bezirk_editable']['table'] = 'field_data_field_bezirk';
  $handler->display->display_options['fields']['field_bezirk_editable']['field'] = 'field_bezirk_editable';
  $handler->display->display_options['fields']['field_bezirk_editable']['label'] = 'Bezirk';
  $handler->display->display_options['fields']['field_bezirk_editable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bezirk_editable']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_bezirk_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_bezirk_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_bezirk_editable']['suppress_description'] = 0;
  /* Field: Content: Apartment location (editable) */
  $handler->display->display_options['fields']['field_apart_location_editable']['id'] = 'field_apart_location_editable';
  $handler->display->display_options['fields']['field_apart_location_editable']['table'] = 'field_data_field_apart_location';
  $handler->display->display_options['fields']['field_apart_location_editable']['field'] = 'field_apart_location_editable';
  $handler->display->display_options['fields']['field_apart_location_editable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_apart_location_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_apart_location_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_apart_location_editable']['suppress_description'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apartment' => 'apartment',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Objekt ID (field_objektid_nunumeric) */
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['id'] = 'field_objektid_nunumeric_value';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['table'] = 'field_data_field_objektid_nunumeric';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['field'] = 'field_objektid_nunumeric_value';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['group'] = 1;
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['expose']['operator_id'] = 'field_objektid_nunumeric_value_op';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['expose']['label'] = 'Objekt ID';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['expose']['operator'] = 'field_objektid_nunumeric_value_op';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['expose']['identifier'] = 'field_objektid_nunumeric_value';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Borough (field_bezirk) */
  $handler->display->display_options['filters']['field_bezirk_tid']['id'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['table'] = 'field_data_field_bezirk';
  $handler->display->display_options['filters']['field_bezirk_tid']['field'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_bezirk_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['operator_id'] = 'field_bezirk_tid_op';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['label'] = 'Bezirk';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['operator'] = 'field_bezirk_tid_op';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['identifier'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_bezirk_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_bezirk_tid']['vocabulary'] = 'vocabulary_3';
  $handler->display->display_options['filters']['field_bezirk_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Titel (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Titel';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'admin/content/dash/wohnungen/quick';
  $handler->display->display_options['menu']['title'] = 'Wohnungen Quick Edit';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-admin-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Seiten */
  $handler = $view->new_display('page', 'Seiten', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Admin Seiten';
  $handler->display->display_options['field_language_add_to_query'] = 0;
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none-accelerated';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'title' => 'title',
          'language' => 'language',
          'status' => 'status',
          'page::body' => 'page::body',
          'page::title_field' => 'page::title_field',
          'objekt::field_address' => 'objekt::field_address',
          'objekt::field_ansprechpartner' => 'objekt::field_ansprechpartner',
          'objekt::field_bezirk' => 'objekt::field_bezirk',
          'objekt::field_developer' => 'objekt::field_developer',
          'objekt::field_heating_type' => 'objekt::field_heating_type',
          'objekt::field_kategorie' => 'objekt::field_kategorie',
          'objekt::field_moving_in_from' => 'objekt::field_moving_in_from',
          'objekt::field_no_of_floors' => 'objekt::field_no_of_floors',
          'objekt::field_obj_apartments' => 'objekt::field_obj_apartments',
          'objekt::field_object_description' => 'objekt::field_object_description',
          'objekt::field_object_images' => 'objekt::field_object_images',
          'objekt::field_object_location' => 'objekt::field_object_location',
          'objekt::field_object_other' => 'objekt::field_object_other',
          'objekt::field_objekt_wkt' => 'objekt::field_objekt_wkt',
          'objekt::field_objektid_nunumeric' => 'objekt::field_objektid_nunumeric',
          'objekt::field_rent_commission' => 'objekt::field_rent_commission',
          'objekt::field_sale_commission' => 'objekt::field_sale_commission',
          'objekt::field_status_quo' => 'objekt::field_status_quo',
          'objekt::field_topobjekt' => 'objekt::field_topobjekt',
          'objekt::field_year_built' => 'objekt::field_year_built',
          'objekt::title_field' => 'objekt::title_field',
          'apartment::field_apart_bathrooms' => 'apartment::field_apart_bathrooms',
          'apartment::field_apart_commission' => 'apartment::field_apart_commission',
          'apartment::field_apart_description' => 'apartment::field_apart_description',
          'apartment::field_apart_floor' => 'apartment::field_apart_floor',
          'apartment::field_apart_floor_plan' => 'apartment::field_apart_floor_plan',
          'apartment::field_apart_hoa_fee' => 'apartment::field_apart_hoa_fee',
          'apartment::field_apart_living_space' => 'apartment::field_apart_living_space',
          'apartment::field_apart_location' => 'apartment::field_apart_location',
          'apartment::field_apart_no' => 'apartment::field_apart_no',
          'apartment::field_apart_other' => 'apartment::field_apart_other',
          'apartment::field_apart_pictures' => 'apartment::field_apart_pictures',
          'apartment::field_apart_price' => 'apartment::field_apart_price',
          'apartment::field_apart_price_parking' => 'apartment::field_apart_price_parking',
          'apartment::field_apart_rooms' => 'apartment::field_apart_rooms',
          'apartment::field_apart_sleeping_rooms' => 'apartment::field_apart_sleeping_rooms',
          'apartment::field_ausstattung' => 'apartment::field_ausstattung',
          'apartment::field_kategorie' => 'apartment::field_kategorie',
          'apartment::field_moving_in_from' => 'apartment::field_moving_in_from',
          'apartment::field_object_ref' => 'apartment::field_object_ref',
          'apartment::title_field' => 'apartment::title_field',
          'apartment::field_save_workflow' => 'apartment::field_save_workflow',
        ),
      ),
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<a href="/node/[nid]/edit?destination=admin/dash" title="Objekt bearbeiten">bearbeiten</a> | <a href="/node/[nid]/translate?destination=admin/dash" title="Objekt übersetzen">übersetzen</a>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Seite';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="/node/[nid]?destination=/admin/content/dash/seiten" title="Objekt ansehen">[title]</a> | [edit_node]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Letze Änderung';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['element_label_colon'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
    'webform' => 'webform',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['path'] = 'admin/content/dash/seiten';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Seiten';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['admin'] = $view;

  $view = new view();
  $view->name = 'crm_anfragen';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_activity';
  $view->human_name = 'CRM Anfragen';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Anfragen';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'activity_id' => 'activity_id',
    'field_angefragte_wohnung' => 'field_angefragte_wohnung',
    'uid' => 'uid',
    'field_activity_bearbeiter_editable' => 'field_activity_bearbeiter_editable',
    'field_activity_participants_editable' => 'field_activity_participants_editable',
    'field_activity_status_editable' => 'field_activity_status_editable',
    'field_activity_notes' => 'field_activity_notes',
    'created' => 'created',
    'edit_crm_activity' => 'edit_crm_activity',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'activity_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_angefragte_wohnung' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_activity_bearbeiter_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_activity_participants_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_activity_status_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_activity_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_crm_activity' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  /* Field: CRM Core Activity: Inquiry for */
  $handler->display->display_options['fields']['field_angefragte_wohnung']['id'] = 'field_angefragte_wohnung';
  $handler->display->display_options['fields']['field_angefragte_wohnung']['table'] = 'field_data_field_angefragte_wohnung';
  $handler->display->display_options['fields']['field_angefragte_wohnung']['field'] = 'field_angefragte_wohnung';
  $handler->display->display_options['fields']['field_angefragte_wohnung']['label'] = 'Apartment interested in';
  $handler->display->display_options['fields']['field_angefragte_wohnung']['settings'] = array(
    'link' => 0,
  );
  /* Field: CRM Core Activity: Author */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['separator'] = '';
  /* Field: CRM Core Activity: Bearbeiter (editable) */
  $handler->display->display_options['fields']['field_activity_bearbeiter_editable']['id'] = 'field_activity_bearbeiter_editable';
  $handler->display->display_options['fields']['field_activity_bearbeiter_editable']['table'] = 'field_data_field_activity_bearbeiter';
  $handler->display->display_options['fields']['field_activity_bearbeiter_editable']['field'] = 'field_activity_bearbeiter_editable';
  $handler->display->display_options['fields']['field_activity_bearbeiter_editable']['label'] = 'Bearbeiter';
  $handler->display->display_options['fields']['field_activity_bearbeiter_editable']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_activity_bearbeiter_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_activity_bearbeiter_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_activity_bearbeiter_editable']['suppress_description'] = 0;
  /* Field: CRM Core Activity: Participants (editable) */
  $handler->display->display_options['fields']['field_activity_participants_editable']['id'] = 'field_activity_participants_editable';
  $handler->display->display_options['fields']['field_activity_participants_editable']['table'] = 'field_data_field_activity_participants';
  $handler->display->display_options['fields']['field_activity_participants_editable']['field'] = 'field_activity_participants_editable';
  $handler->display->display_options['fields']['field_activity_participants_editable']['label'] = 'Participants';
  $handler->display->display_options['fields']['field_activity_participants_editable']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_activity_participants_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_activity_participants_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_activity_participants_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_activity_participants_editable']['suppress_description'] = 0;
  /* Field: CRM Core Activity: Status (editable) */
  $handler->display->display_options['fields']['field_activity_status_editable']['id'] = 'field_activity_status_editable';
  $handler->display->display_options['fields']['field_activity_status_editable']['table'] = 'field_data_field_activity_status';
  $handler->display->display_options['fields']['field_activity_status_editable']['field'] = 'field_activity_status_editable';
  $handler->display->display_options['fields']['field_activity_status_editable']['label'] = 'Status';
  $handler->display->display_options['fields']['field_activity_status_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_activity_status_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_activity_status_editable']['suppress_description'] = 0;
  /* Field: CRM Core Activity: Notes */
  $handler->display->display_options['fields']['field_activity_notes']['id'] = 'field_activity_notes';
  $handler->display->display_options['fields']['field_activity_notes']['table'] = 'field_data_field_activity_notes';
  $handler->display->display_options['fields']['field_activity_notes']['field'] = 'field_activity_notes';
  /* Field: CRM Core Activity: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: CRM Core Activity: Edit link */
  $handler->display->display_options['fields']['edit_crm_activity']['id'] = 'edit_crm_activity';
  $handler->display->display_options['fields']['edit_crm_activity']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['edit_crm_activity']['field'] = 'edit_crm_activity';
  $handler->display->display_options['fields']['edit_crm_activity']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_crm_activity']['redirect'] = 0;
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'anfrage' => 'anfrage',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/crm/anfragen';
  $export['crm_anfragen'] = $view;

  $view = new view();
  $view->name = 'crm_dashboard';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'CRM Dashboard';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'CRM Dashboard';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'contact_id' => 'contact_id',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'contact_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Bulk operations: CRM Core Contact */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::crm_core_contact_join_into_household_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::crm_core_contact_merge_contacts_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::crm_core_contact_send_email_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  /* Field: CRM Core Contact: Mitarbeiter */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['label'] = 'Contact';
  $handler->display->display_options['fields']['contact_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['contact_name']['settings'] = array(
    'format' => 'short_full',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: CRM Core Contact: E-Mail */
  $handler->display->display_options['fields']['field_e_mail']['id'] = 'field_e_mail';
  $handler->display->display_options['fields']['field_e_mail']['table'] = 'field_data_field_e_mail';
  $handler->display->display_options['fields']['field_e_mail']['field'] = 'field_e_mail';
  /* Field: CRM Core Contact: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  /* Field: CRM Core Contact: Address */
  $handler->display->display_options['fields']['field_crm_address']['id'] = 'field_crm_address';
  $handler->display->display_options['fields']['field_crm_address']['table'] = 'field_data_field_crm_address';
  $handler->display->display_options['fields']['field_crm_address']['field'] = 'field_crm_address';
  $handler->display->display_options['fields']['field_crm_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_crm_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Filter criterion: CRM Core Contact: Contact Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'individual' => 'individual',
    'mitarbeiter' => 'mitarbeiter',
  );

  /* Display: Kontakte */
  $handler = $view->new_display('page', 'Kontakte', 'page');
  $handler->display->display_options['path'] = 'admin/crm/dash';
  $export['crm_dashboard'] = $view;

  $view = new view();
  $view->name = 'references';
  $view->description = 'A view with references for References Dialog (Objekte in Wohnungen und Wohungen in Objekten)';
  $view->tag = 'hk';
  $view->base_table = 'node';
  $view->human_name = 'References Dialog Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Suchen';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'title_field_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '16';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'apartdialog';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Objekt ID */
  $handler->display->display_options['fields']['field_objektid_nunumeric']['id'] = 'field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['table'] = 'field_data_field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['field'] = 'field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['label'] = '';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['element_label_colon'] = FALSE;
  /* Field: Content: Object images */
  $handler->display->display_options['fields']['field_object_images']['id'] = 'field_object_images';
  $handler->display->display_options['fields']['field_object_images']['table'] = 'field_data_field_object_images';
  $handler->display->display_options['fields']['field_object_images']['field'] = 'field_object_images';
  $handler->display->display_options['fields']['field_object_images']['label'] = '';
  $handler->display->display_options['fields']['field_object_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_object_images']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_object_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_object_images']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'objekt' => 'objekt',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Titel oder Objekt-ID ';
  $handler->display->display_options['filters']['combine']['expose']['description'] = 'Sucht beim tippen, damit es schneller geht.';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'field_objektid_nunumeric' => 'field_objektid_nunumeric',
  );

  /* Display: Object Search */
  $handler = $view->new_display('references_dialog', 'Object Search', 'references_dialog_object');
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['attach'] = array(
    0 => 'node:field_object_ref:apartment',
  );

  /* Display: Apart Search */
  $handler = $view->new_display('references_dialog', 'Apart Search', 'references_dialog_apart');
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Objekt ID */
  $handler->display->display_options['fields']['field_objektid_nunumeric']['id'] = 'field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['table'] = 'field_data_field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['field'] = 'field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['label'] = '';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['element_label_colon'] = FALSE;
  /* Field: Content: Apartment No. */
  $handler->display->display_options['fields']['field_apart_no']['id'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['table'] = 'field_data_field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['field'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['label'] = 'Wohnungsnr.';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Node ID';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Pictures */
  $handler->display->display_options['fields']['field_apart_pictures']['id'] = 'field_apart_pictures';
  $handler->display->display_options['fields']['field_apart_pictures']['table'] = 'field_data_field_apart_pictures';
  $handler->display->display_options['fields']['field_apart_pictures']['field'] = 'field_apart_pictures';
  $handler->display->display_options['fields']['field_apart_pictures']['label'] = '';
  $handler->display->display_options['fields']['field_apart_pictures']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_pictures']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_apart_pictures']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_apart_pictures']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_apart_pictures']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apartment' => 'apartment',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Titel oder Objekt-ID ';
  $handler->display->display_options['filters']['combine']['expose']['description'] = 'Sucht beim tippen, damit es schneller geht.';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'field_objektid_nunumeric' => 'field_objektid_nunumeric',
    'nid' => 'nid',
  );
  $handler->display->display_options['attach'] = array(
    0 => 'node:field_obj_apartments:objekt',
  );
  $export['references'] = $view;

  return $export;
}
