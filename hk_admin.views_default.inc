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
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Admin Dashboard';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    6 => '6',
    3 => '3',
    7 => '7',
  );
  $handler->display->display_options['cache']['type'] = 'none-debug';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
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
  $handler->display->display_options['pager']['type'] = 'lite';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '10, 20, 25, 50, 100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'nid' => 'nid',
    'edit_node' => 'edit_node',
    'field_objektid_nunumeric' => 'field_objektid_nunumeric',
    'title' => 'title',
    'changed' => 'changed',
    'field_obj_apartments' => 'field_obj_apartments',
    'state' => 'state',
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
      'sortable' => 1,
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
    'field_obj_apartments' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'state' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
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
    'rules_component::tmgmt_node_ui_tmgmt_nodes_add_items_to_cart' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
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
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
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
    'action::system_send_email_action' => array(
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
          'page::field_bild' => 'page::field_bild',
          'page::title_field' => 'page::title_field',
          'objekt::body' => 'objekt::body',
          'objekt::field_bezirk' => 'objekt::field_bezirk',
          'objekt::field_developer' => 'objekt::field_developer',
          'objekt::field_heating_type' => 'objekt::field_heating_type',
          'objekt::field_moving_in_from' => 'objekt::field_moving_in_from',
          'objekt::field_no_of_floors' => 'objekt::field_no_of_floors',
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
          'objekt::field_ansprechpartner' => 'objekt::field_ansprechpartner',
          'objekt::field_address' => 'objekt::field_address',
          'objekt::title_field' => 'objekt::title_field',
          'objekt::field_kategorie' => 'objekt::field_kategorie',
          'objekt::field_obj_apartments' => 'objekt::field_obj_apartments',
          'objekt::field_save_workflow' => 'objekt::field_save_workflow',
          'apartment::field_apart_bathrooms' => 'apartment::field_apart_bathrooms',
          'apartment::field_apart_description' => 'apartment::field_apart_description',
          'apartment::field_apart_floor' => 'apartment::field_apart_floor',
          'apartment::field_apart_hoa_fee' => 'apartment::field_apart_hoa_fee',
          'apartment::field_apart_living_space' => 'apartment::field_apart_living_space',
          'apartment::field_apart_location' => 'apartment::field_apart_location',
          'apartment::field_apart_no' => 'apartment::field_apart_no',
          'apartment::field_apart_other' => 'apartment::field_apart_other',
          'apartment::field_apart_price' => 'apartment::field_apart_price',
          'apartment::field_apart_price_parking' => 'apartment::field_apart_price_parking',
          'apartment::field_apart_rooms' => 'apartment::field_apart_rooms',
          'apartment::field_object_ref' => 'apartment::field_object_ref',
          'apartment::field_apart_pictures' => 'apartment::field_apart_pictures',
          'apartment::field_apart_sleeping_rooms' => 'apartment::field_apart_sleeping_rooms',
          'apartment::field_moving_in_from' => 'apartment::field_moving_in_from',
          'apartment::field_apart_commission' => 'apartment::field_apart_commission',
          'apartment::field_ausstattung' => 'apartment::field_ausstattung',
          'apartment::field_apart_floor_plan' => 'apartment::field_apart_floor_plan',
          'apartment::title_field' => 'apartment::title_field',
          'apartment::field_kategorie' => 'apartment::field_kategorie',
          'apartment::field_save_workflow' => 'apartment::field_save_workflow',
          'apartment::field_apart_net_rent' => 'apartment::field_apart_net_rent',
          'apartment::field_apart_rate_of_return' => 'apartment::field_apart_rate_of_return',
          'apartment::field_apart_type' => 'apartment::field_apart_type',
        ),
      ),
    ),
    'rules_component::rules_expose_per_e_mail_verschicken' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_expose_speichern' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::flag_node_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_beschreibung_vom_objekt_falls_leer' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_beschreibung_vom_objekt_falls_leer_update_' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_kategorie_vom_objekt' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_kategorie_vom_objekt_falls_leer' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_lage_vom_objekt_falls_leer' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_lage_vom_objekt_falls_leer_update_' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_objekt_id_vom_objekt_update' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_objekt_id_vom_objekt' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_sonstiges_vom_objekt_falls_leer' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_sonstiges_vom_objekt_falls_leer_update_' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_standort_vom_objekt' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_standort_vom_objekt_create' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::465' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::redhen_fields_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
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
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="/node/[nid]?destination=/admin/dash" title="Objekt ansehen">[title]</a> | [edit_node]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Letze Änderung';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Content: Apartments */
  $handler->display->display_options['fields']['field_obj_apartments']['id'] = 'field_obj_apartments';
  $handler->display->display_options['fields']['field_obj_apartments']['table'] = 'field_data_field_obj_apartments';
  $handler->display->display_options['fields']['field_obj_apartments']['field'] = 'field_obj_apartments';
  $handler->display->display_options['fields']['field_obj_apartments']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_obj_apartments']['alter']['text'] = '<a href="/node/[field_obj_apartments-target_id]" title="Wohnung ansehen">[field_obj_apartments]</a> | <a href="/node/[field_obj_apartments-target_id]/edit?destination=admin/dash" title="Wohnung bearbeiten">bearbeiten</a> | <a href="/node/[field_obj_apartments-target_id]/translate?destination=admin/dash" title="Wohnung übersetzen">übersetzen</a>';
  $handler->display->display_options['fields']['field_obj_apartments']['element_class'] = 'aparts';
  $handler->display->display_options['fields']['field_obj_apartments']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_obj_apartments']['element_default_classes'] = FALSE;
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
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Veröffentlicht';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Status';
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
  /* Filter criterion: Content: Bezirk (field_bezirk) */
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
  /* Filter criterion: Content: Category (field_kategorie) */
  $handler->display->display_options['filters']['field_kategorie_tid']['id'] = 'field_kategorie_tid';
  $handler->display->display_options['filters']['field_kategorie_tid']['table'] = 'field_data_field_kategorie';
  $handler->display->display_options['filters']['field_kategorie_tid']['field'] = 'field_kategorie_tid';
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
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['operator'] = 'in';
  $handler->display->display_options['filters']['sid']['value'] = array();
  $handler->display->display_options['filters']['sid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );

  /* Display: Admin Dashboard */
  $handler = $view->new_display('page', 'Admin Dashboard', 'dashboard');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'admin/dash';
  $handler->display->display_options['menu']['title'] = 'Dashboard';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Admin Objekte */
  $handler = $view->new_display('page', 'Admin Objekte', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Admin Objekte';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'admin/dash/objekte';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Objekte';
  $handler->display->display_options['menu']['weight'] = '-10';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Admin Wohnungen */
  $handler = $view->new_display('page', 'Admin Wohnungen', 'wohnungen');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Admin Wohnungen';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none-accelerated';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'edit_node' => 'edit_node',
    'field_objektid_nunumeric' => 'field_objektid_nunumeric',
    'field_apart_no' => 'field_apart_no',
    'title' => 'title',
    'title_field_editable' => 'title_field_editable',
    'field_apart_price' => 'field_apart_price',
    'field_apart_price_editable' => 'field_apart_price_editable',
    'field_ausstattung_editable' => 'field_ausstattung_editable',
    'language' => 'language',
    'status' => 'status',
    'changed' => 'changed',
    'sid' => 'sid',
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
    'edit_node' => array(
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
      'sortable' => 0,
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
    'sid' => array(
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
  /* Field: Content: Objekt ID */
  $handler->display->display_options['fields']['field_objektid_nunumeric']['id'] = 'field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['table'] = 'field_data_field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['field'] = 'field_objektid_nunumeric';
  /* Field: Content: Apartment No. */
  $handler->display->display_options['fields']['field_apart_no']['id'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['table'] = 'field_data_field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['field'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['label'] = 'Wohnungsnr.';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Wohnung';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="/node/[nid]?destination=/admin/dash/wohnungen" title="Wohnung ansehen">[title]</a> | [edit_node]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Titel (editable) */
  $handler->display->display_options['fields']['title_field_editable']['id'] = 'title_field_editable';
  $handler->display->display_options['fields']['title_field_editable']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_editable']['field'] = 'title_field_editable';
  $handler->display->display_options['fields']['title_field_editable']['label'] = 'Titel';
  $handler->display->display_options['fields']['title_field_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['title_field_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['title_field_editable']['suppress_description'] = 0;
  /* Field: Content: Purchasing price */
  $handler->display->display_options['fields']['field_apart_price']['id'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['table'] = 'field_data_field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['field'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['label'] = 'Kaufpreis';
  $handler->display->display_options['fields']['field_apart_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_apart_price']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => ',',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
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
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Status';
  $handler->display->display_options['fields']['sid']['exclude'] = TRUE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<a href="/node/[nid]/edit?destination=admin/dash" title="Objekt bearbeiten">bearbeiten</a> | <a href="/node/[nid]/translate?destination=admin/dash" title="Objekt übersetzen">übersetzen</a>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: Bezirk (field_bezirk) */
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
  /* Filter criterion: Broken/missing handler */
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
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
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
  $handler->display->display_options['path'] = 'admin/dash/wohnungen';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Wohnungen';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Seiten */
  $handler = $view->new_display('page', 'Seiten', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Admin Seiten';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none-accelerated';
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
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::workflow_vbo_given_state_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::workflow_vbo_next_state_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_expose_per_e_mail_verschicken' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_expose_speichern' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::flag_node_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_beschreibung_vom_objekt_falls_leer' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_beschreibung_vom_objekt_falls_leer_update_' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_kategorie_vom_objekt' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_kategorie_vom_objekt_falls_leer' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_lage_vom_objekt_falls_leer' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_lage_vom_objekt_falls_leer_update_' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_objekt_id_vom_objekt' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_objekt_id_vom_objekt_update' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_sonstiges_vom_objekt_falls_leer' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_sonstiges_vom_objekt_falls_leer_update_' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_standort_vom_objekt' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_kopiere_standort_vom_objekt_create' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
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
          'page::body' => 'page::body',
          'page::field_bild' => 'page::field_bild',
          'page::title_field' => 'page::title_field',
          'objekt::body' => 'objekt::body',
          'objekt::field_bezirk' => 'objekt::field_bezirk',
          'objekt::field_developer' => 'objekt::field_developer',
          'objekt::field_heating_type' => 'objekt::field_heating_type',
          'objekt::field_moving_in_from' => 'objekt::field_moving_in_from',
          'objekt::field_no_of_floors' => 'objekt::field_no_of_floors',
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
          'objekt::field_ansprechpartner' => 'objekt::field_ansprechpartner',
          'objekt::field_address' => 'objekt::field_address',
          'objekt::title_field' => 'objekt::title_field',
          'objekt::field_kategorie' => 'objekt::field_kategorie',
          'objekt::field_obj_apartments' => 'objekt::field_obj_apartments',
          'apartment::field_apart_bathrooms' => 'apartment::field_apart_bathrooms',
          'apartment::field_apart_description' => 'apartment::field_apart_description',
          'apartment::field_apart_floor' => 'apartment::field_apart_floor',
          'apartment::field_apart_hoa_fee' => 'apartment::field_apart_hoa_fee',
          'apartment::field_apart_living_space' => 'apartment::field_apart_living_space',
          'apartment::field_apart_location' => 'apartment::field_apart_location',
          'apartment::field_apart_no' => 'apartment::field_apart_no',
          'apartment::field_apart_other' => 'apartment::field_apart_other',
          'apartment::field_apart_price' => 'apartment::field_apart_price',
          'apartment::field_apart_price_parking' => 'apartment::field_apart_price_parking',
          'apartment::field_apart_rooms' => 'apartment::field_apart_rooms',
          'apartment::field_object_ref' => 'apartment::field_object_ref',
          'apartment::field_apart_pictures' => 'apartment::field_apart_pictures',
          'apartment::field_apart_sleeping_rooms' => 'apartment::field_apart_sleeping_rooms',
          'apartment::field_moving_in_from' => 'apartment::field_moving_in_from',
          'apartment::field_apart_commission' => 'apartment::field_apart_commission',
          'apartment::field_ausstattung' => 'apartment::field_ausstattung',
          'apartment::field_apart_floor_plan' => 'apartment::field_apart_floor_plan',
          'apartment::title_field' => 'apartment::title_field',
          'apartment::field_kategorie' => 'apartment::field_kategorie',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::465' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::redhen_fields_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
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
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::auto_entitylabel_entity_update_action' => array(
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
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="/node/[nid]?destination=/admin/dash" title="Objekt ansehen">[title]</a> | [edit_node]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Letze Änderung';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
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
    'page' => 'page',
    'webform' => 'webform',
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
  /* Filter criterion: Content: Bezirk (field_bezirk) */
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
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'admin/dash/seiten';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Seiten';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['admin'] = $view;

  $view = new view();
  $view->name = 'references';
  $view->description = 'A view with references for References Dialog (Objekte in Wohnungen)';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'References';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
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
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['attach'] = array(
    0 => 'node:field_object_ref:apartment',
  );

  /* Display: Apart Search */
  $handler = $view->new_display('references_dialog', 'Apart Search', 'references_dialog_apart');
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
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
  $handler->display->display_options['fields']['field_apart_no']['label'] = '';
  $handler->display->display_options['fields']['field_apart_no']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['attach'] = array(
    0 => 'node:field_obj_apartments:objekt',
  );
  $export['references'] = $view;

  return $export;
}
