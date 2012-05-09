<?php
/**
 * @file
 * pro_101_ignore.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pro_101_ignore_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_block';
  $strongarm->value = 1336528348;
  $export['cache_flush_cache_block'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_page';
  $strongarm->value = 1336528348;
  $export['cache_flush_cache_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'context_block_rebuild_needed';
  $strongarm->value = TRUE;
  $export['context_block_rebuild_needed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_key';
  $strongarm->value = 'wqu9W9TO-F7cQUrwn6TcLvSzIa3fpxHp4WfZkVGbFWI';
  $export['cron_key'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_last';
  $strongarm->value = 1336528263;
  $export['cron_last'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'css_js_query_string';
  $strongarm->value = 'm3qg2w';
  $export['css_js_query_string'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ctools_last_cron';
  $strongarm->value = 1336528327;
  $export['ctools_last_cron'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'defaultcontent_hashes';
  $strongarm->value = array(
    0 => 'e77e67271cd3688488bd5f9755aad517',
    1 => '62af662e1cbe7927f09a6776daed5e9e',
    2 => '2f1132b273088c7cdfa59405fcc7ed25',
  );
  $export['defaultcontent_hashes'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'defaultcontent_run_2f1132b273088c7cdfa59405fcc7ed25';
  $strongarm->value = TRUE;
  $export['defaultcontent_run_2f1132b273088c7cdfa59405fcc7ed25'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'defaultcontent_run_62af662e1cbe7927f09a6776daed5e9e';
  $strongarm->value = TRUE;
  $export['defaultcontent_run_62af662e1cbe7927f09a6776daed5e9e'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'defaultcontent_run_e77e67271cd3688488bd5f9755aad517';
  $strongarm->value = TRUE;
  $export['defaultcontent_run_e77e67271cd3688488bd5f9755aad517'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_css_cache_files';
  $strongarm->value = array(
    'a8fc530372d94cade5075a3181f80417017120f972c21cef2489efd04ded0e71' => 'public://css/css_9iW3fJMwdijDlTNGaOFKuc8sVNv5FZoKCJcTm_gP3pY.css',
    '4756f0158ea6d0be6828cc9a152281bb70a506869ec0af9f35674e348242d6a7' => 'public://css/css_kvaqtp5WyrrHbRp04EMjxDRU1slGUfavu9v2bsvcoDU.css',
    '9a4288aac628dd1f4a3ed85b2b0488bb6e3152b425553bb0a70d2e58d2b80ec2' => 'public://css/css_NZy3EJWI0Z_lKYkNyC3So1b-l1SGpmgZxxo_0zudnq0.css',
    '4f7510382728fba0621914e75e34c385d362f97a1267f8ce2886e62c2ef4ec6e' => 'public://css/css_quW47FRmfqvjanHOMKuGByzNkMTB8GEeRnQVveDnHK8.css',
    '4a13329b4c2c5281004fd570716b47912d2209c923736971aed1ead588c0b497' => 'public://css/css_NFV_h4OLeMlej2xKkUhTc5pgwX2qNopZ3EhcwyYq_OM.css',
    '6e2f26f029ab72b0e9a6a8cd2490479a12bd8b27e960a07e7b364026c58ceaee' => 'public://css/css_nKQJdbA3MG_EgmEEYvJKPRKNf-haa11msDRwdP3Hl_A.css',
    '98e1094cef33cf81b283d4817d9f243ac77d68c2a7f8b395d43583bbc4779e6c' => 'public://css/css_9iW3fJMwdijDlTNGaOFKuc8sVNv5FZoKCJcTm_gP3pY.css',
    '5b35bb67473f0e7c08f2d7a005d87d44983aacd9a86b45e8e64f2773d28009f3' => 'public://css/css_kvaqtp5WyrrHbRp04EMjxDRU1slGUfavu9v2bsvcoDU.css',
    '19e633bc641237bc112e1b3e3d1b88390a60211d2b5cc206197eb34aefec1de0' => 'public://css/css_7zbqJChzayaCAs5t6e_MV-rq7ECQrnXaLV_i289TM-Y.css',
    '936d7c105f119bffc568f320aa89ff280ccb26e47c6bb80a35ce308010b41798' => 'public://css/css_quW47FRmfqvjanHOMKuGByzNkMTB8GEeRnQVveDnHK8.css',
    '5d026388129da9d05a773c22626eae10d01685fc17d5ad8692aa8553df247a53' => 'public://css/css_NFV_h4OLeMlej2xKkUhTc5pgwX2qNopZ3EhcwyYq_OM.css',
    '38d3ba699242ad1ade571593cd89939897461f30d119cecf7380a525d12a80e9' => 'public://css/css_nKQJdbA3MG_EgmEEYvJKPRKNf-haa11msDRwdP3Hl_A.css',
    '7ba14d1ab2d6be1ee5af9189c36449c70711f28541a23efee1bac9f782dc8807' => 'public://css/css_KLXbUEzITkYuWCpgH_F92yPh1Ga5-bbN2hS1_XtB6ww.css',
  );
  $export['drupal_css_cache_files'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_js_cache_files';
  $strongarm->value = array(
    '097be673a1a2933b03c92d03e3ef6bd3f40377fa0efb67af8dfb51809e0009ab' => 'public://js/js_IRP2_U6MMuRvOS2doP3oARg34wSgQUzC3l4xgFFNh28.js',
    '4a37c94fdf62375ec12b5a3b8df2d27f22062056318896a4bb9d155071cca715' => 'public://js/js_qej_GljBRya6mSG00ZtuXTrIxivY3cPUh6GIYBqVanQ.js',
    'b9efccac46fdd96fe275fc247e129686116f1d7aa7838f862ad6ac1bb558234e' => 'public://js/js_lHeL0WbAjSr6rQ_CBXVEajk8jKcw7r5-EPFG7ahYSrg.js',
    'cff27087938311313a9bd0851511549fb6b133e5027367d7bca95b62aec9322f' => 'public://js/js_NsVomvnv2Mq6WzKhSSfRsvKu4vVUvYuYMld4u6sEhqY.js',
    'c162c900831d8a9b985080c996972e02d7c9b6a263680a4fe2eafdfb23d46021' => 'public://js/js_ByQqoFmos53DlLDLfNaeXBXbxiumZmAoP08wXIegdFk.js',
    '00d1fcd78ff14d645b5bbfc6cd0ab0d71e35f016e4faf871131fecf3af480803' => 'public://js/js_qej_GljBRya6mSG00ZtuXTrIxivY3cPUh6GIYBqVanQ.js',
    '4a4f9e3e38f93b174ce0058180de912c2c97470a8500c86656f1b47c04f20ee1' => 'public://js/js_8ZcfGvC9m3SPgmdGF37z2LRUFiBA2yeUFKPo5Q0mONA.js',
  );
  $export['drupal_js_cache_files'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_private_key';
  $strongarm->value = '8VjjtDVqww4fab_cUdo-2yMwc6ksezQsehdIaqWD754';
  $export['drupal_private_key'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_codecache';
  $strongarm->value = array(
    'pro_101_authoring_infrastructure' => array(
      'dependencies' => '9440c60a248a22ba91ff72b08a8e832e',
      'user_permission' => 'c42d7ad683167c545b9e49cc5be75dd0',
      'filter' => '38c8be7c818a162a59e83815ae45d9a5',
    ),
    'pro_101_build_infrastructure' => array(
      'dependencies' => '75ca91d4aa86c28ea3e126265993c039',
      'user_role' => 'a0a90752e327f8b93ed391d4253be2a7',
      'user_permission' => '81dd82cd3575e7202871a99e7d72536d',
      'variable' => '1c597e25fbf01da39717ac4c1c85b335',
    ),
    'pro_101_core_infrastructure' => array(
      'dependencies' => '9a038ac37ec6a66555b7f2bd61dcb6fc',
      'user_permission' => 'a07066a6e63ad821882636b162ba7fe4',
      'variable' => 'c3b087e9ad8c48abca60874087b985db',
    ),
    'pro_101_media_infrastructure' => array(
      'dependencies' => '4abc1bea42224a9f5ec0b81eadc845a0',
      'user_permission' => '75317a5d1c6693e96f5e1f5fdd3e20cc',
      'variable' => 'e2425c552f1e47ddcd3eecc29f6c6f03',
    ),
    'pro_101_seo_infrastructure' => array(
      'dependencies' => '5c486c87f8bb57225f78fc8de1be0e6f',
      'user_permission' => '1847d1517707940a3e1d97539685de9a',
      'variable' => 'cc0c0d915841ce6e8ed2cb92689558f7',
    ),
    'pro_101_theme_infrastructure' => array(
      'dependencies' => 'f03a961a51b71e563dcd8bc36350cdc2',
      'filter' => '88cfa6361e000874caa65515923bb060',
      'user_permission' => '512e9c9279b5f69c62903828e12c3ed2',
      'variable' => 'de35a0eec834c8668e7ba8549fad3cc2',
    ),
    'pro_101_user_infrastructure' => array(
      'dependencies' => '9a43ea6d4fa09137853a08938f746e13',
      'field' => '4e2185239ddac64294b4d5b4cad43460',
      'user_permission' => '14c486d27f6daf9c7807354737dfe7a4',
      'variable' => '82ae659c39fe10e2a863cb8a7ec1fd89',
    ),
    'pro_101_about_feature_p' => array(
      'dependencies' => 'c4c4657cc65e665d8c5a4e27d3a45ddd',
    ),
    'pro_101_answers_feature' => array(
      'dependencies' => 'dc43cb414cfbe40b6086429d63b5898a',
      'field' => 'c4096e8c9478c10a2a9083b5f18c2d32',
      'taxonomy' => '85633b76e79a119d39483e8fdaa7ae6a',
      'user_permission' => '5835a1f7bfd66310e051a80bb49ba04c',
      'variable' => '7e85b669dc62fde7a8c58161fe1027b9',
      'uuid_term' => 'cdffbcb5944671e6f6c83c3e90ac89d2',
    ),
    'pro_101_blog_feature' => array(
      'dependencies' => 'bfdcf2625789a55ef18b12bf3431c985',
      'field' => '356c22c9f30837ac56884bb774f0178c',
      'taxonomy' => '97332887653d7e72b1b776161f786c6d',
      'user_permission' => 'cd710adda2c88ea176e16483ea4367c6',
      'variable' => '1e9a1a509e0835ff0ac1e16b15f52f69',
      'uuid_term' => '3e2b3909a6d157d776cf2c1079fbf11e',
      'context' => 'b2f221551ca2b73322e688008c33c1b7',
      'node' => '6dba0cc1c5af2a57bc90b9c7db03f925',
      'views_view' => 'c62ee7f626748881d8e68db03b633674',
    ),
    'pro_101_contact_feature' => array(
      'dependencies' => 'ed0cf7e222a46b381b2767add6a63121',
      'field' => 'db9fd7ed9f56e06b8846df956342f818',
      'user_permission' => 'ad74464e4e1a3d7908cbee91d1fdb4c0',
      'variable' => 'af1baca0bfc2fbb38d4dbf51b67a3ffc',
    ),
    'pro_101_home_feature' => array(
      'dependencies' => 'b99cc583534a298102323651da169967',
      'content_menu_links' => '988f717842fcf909bd31a8e6b4b59ac4',
    ),
    'pro_101_page_feature' => array(
      'dependencies' => 'ef68d9d1741532dfd08bdf754b4b5fe8',
      'field' => '84f36b636f502b9c64dd91b507d11940',
      'user_permission' => 'ecc4eeb895fb373f76dbc997d2e9c19f',
      'variable' => '3d4e6163bb59cacd6664b5022f9d51a5',
      'node' => '0967447a3999c3dd3effe625128085d7',
    ),
    'pro_101_specialties_feature' => array(
      'dependencies' => '3fd57e84bbefce54aa0a51208e182b91',
      'field' => 'e58eb6e0661f71de0f250444ed7679d8',
      'user_permission' => 'edd7522155da3caad6441ba22bc2d927',
      'variable' => '02fcba4f8a9f563bf33e6293dd3314d9',
    ),
    'pro_101_testimonials_feature' => array(
      'dependencies' => '5be28e167911d1f02c245043845c4dca',
      'user_permission' => '35c3795798cb01acd9034ef71288be8d',
      'field' => '8aac15828175e17b2159c9f0c240c61c',
      'variable' => '7376432f369d3108b900c155448bee52',
      'node' => '07da996d0db903ad2a6694bbffd6ee28',
      'ds_field_settings' => '988ed7533c732a4fb0c5332a3d196758',
      'ds_layout_settings' => '8f541cc12269f13557802964cbb97793',
      'views_view' => '9710c510fe801a95472c5bb10b653222',
    ),
    'pro_101_dev_tools' => array(
      'dependencies' => '3124a3f73bc68d9565f68b5e406d04d6',
      'user_permission' => '8d18ee426c7465e77b456ab9f0b866b6',
      'variable' => 'd2b00a1e8e0d8856df5fbb2ad5c008eb',
    ),
    'pro_101_contact_content' => array(
      'dependencies' => '7b78d7a006d75e11031d6b53721ffc84',
      'content' => 'fb043c8fa67711386f5a7ef7d0c56eab',
    ),
    'pro_101_answers_content' => array(
      'dependencies' => 'b99cc583534a298102323651da169967',
      'content_menu_links' => 'ad558641ae235f67f1657009dd914800',
      'content' => 'fd0590fc945a5da9b0bdfe772660cf3c',
    ),
    'pro_101_blog_content' => array(
      'dependencies' => '6dde91b84b0f67e2186b84317c2ca343',
      'content' => 'd5249e748d48be8058066edc5688ea06',
      'content_menu_links' => '86cddd42041aefab026745d349342bfb',
    ),
    'pro_101_support_infrastructure' => array(
      'dependencies' => 'fbae10209964890000c6f75e50307995',
      'variable' => '3a8f37529a03564c10e116d02ce2dfe4',
      'user_permission' => '0156981559b35b9e7dbb47d4691b9365',
    ),
    'pro_101_about_content' => array(
      'content' => '7fb402cdd128172e81b996876aecb9e5',
    ),
    'pro_101_specialties_content' => array(
      'content' => '2c462d80e5bffb3ea8d1089068c4f33c',
    ),
    'pro_101_testimonials_content' => array(
      'content' => 'eca07ab6d7dd32a058bc24ad5cb5486a',
    ),
    'pro_101_default_users' => array(
      'dependencies' => 'e410ca96d90029817c7bb9c7cb1f7ea4',
    ),
    'pro_101_global_content' => array(
      'dependencies' => '6c768d929c62a2c8e5f2948d0c0d736f',
      'menu_custom' => '1c2b00718ed476ad18590044d454433b',
      'box' => 'f75fa7949690b356e0fda1cb6098b055',
      'context' => 'ca0c0187170593e1799c4d30d304e0a8',
    ),
  );
  $export['features_codecache'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_ignored_orphans';
  $strongarm->value = array();
  $export['features_ignored_orphans'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_semaphore';
  $strongarm->value = array();
  $export['features_semaphore'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_temporary_path';
  $strongarm->value = '/tmp';
  $export['file_temporary_path'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_fallback_format';
  $strongarm->value = 'plain_text';
  $export['filter_fallback_format'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_profile';
  $strongarm->value = 'pro_101';
  $export['install_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_task';
  $strongarm->value = 'done';
  $export['install_task'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_time';
  $strongarm->value = 1336528263;
  $export['install_time'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_expanded';
  $strongarm->value = array();
  $export['menu_expanded'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_masks';
  $strongarm->value = array(
    0 => 501,
    1 => 250,
    2 => 245,
    3 => 125,
    4 => 124,
    5 => 123,
    6 => 122,
    7 => 121,
    8 => 117,
    9 => 63,
    10 => 62,
    11 => 61,
    12 => 60,
    13 => 59,
    14 => 58,
    15 => 45,
    16 => 44,
    17 => 31,
    18 => 30,
    19 => 29,
    20 => 27,
    21 => 24,
    22 => 23,
    23 => 22,
    24 => 21,
    25 => 15,
    26 => 14,
    27 => 13,
    28 => 11,
    29 => 10,
    30 => 7,
    31 => 6,
    32 => 5,
    33 => 3,
    34 => 2,
    35 => 1,
  );
  $export['menu_masks'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = 'content/[node:title]';
  $export['pathauto_node_pattern'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_publisherID';
  $strongarm->value = 'dr-79ae6932-d6a4-53ca-c7a4-9d1aeda192e1';
  $export['sharethis_publisherID'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_default_country';
  $strongarm->value = 'US';
  $export['site_default_country'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'fontaine.cook@pearance.com';
  $export['site_mail'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'legalpro101c.platdev.info';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'pro_101_starter';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_notify_emails';
  $strongarm->value = array(
    0 => 'fontaine.cook@pearance.com',
  );
  $export['update_notify_emails'] = $strongarm;

  return $export;
}
