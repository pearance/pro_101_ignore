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
  $strongarm->name = 'cache_flush_cache';
  $strongarm->value = 0;
  $export['cache_flush_cache'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_block';
  $strongarm->value = 1337192965;
  $export['cache_flush_cache_block'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_field';
  $strongarm->value = 0;
  $export['cache_flush_cache_field'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_filter';
  $strongarm->value = 1337191862;
  $export['cache_flush_cache_filter'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_form';
  $strongarm->value = 0;
  $export['cache_flush_cache_form'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_image';
  $strongarm->value = 1337191862;
  $export['cache_flush_cache_image'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_menu';
  $strongarm->value = 0;
  $export['cache_flush_cache_menu'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_page';
  $strongarm->value = 1337192965;
  $export['cache_flush_cache_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_path';
  $strongarm->value = 0;
  $export['cache_flush_cache_path'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_token';
  $strongarm->value = 0;
  $export['cache_flush_cache_token'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_views';
  $strongarm->value = 0;
  $export['cache_flush_cache_views'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_views_data';
  $strongarm->value = 0;
  $export['cache_flush_cache_views_data'] = $strongarm;

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
  $strongarm->value = 'MrBgTxOFDj2i6xYkqIxSy43dDkxWH_5gTCarYoHDRCc';
  $export['cron_key'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_last';
  $strongarm->value = 1337191862;
  $export['cron_last'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'css_js_query_string';
  $strongarm->value = 'm44op1';
  $export['css_js_query_string'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ctools_last_cron';
  $strongarm->value = 1337146442;
  $export['ctools_last_cron'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'defaultcontent_hashes';
  $strongarm->value = array(
    0 => 'e77e67271cd3688488bd5f9755aad517',
    1 => '62af662e1cbe7927f09a6776daed5e9e',
    2 => '2f1132b273088c7cdfa59405fcc7ed25',
    3 => '214251c488b398afe676bce8681f68b5',
  );
  $export['defaultcontent_hashes'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'defaultcontent_run_214251c488b398afe676bce8681f68b5';
  $strongarm->value = TRUE;
  $export['defaultcontent_run_214251c488b398afe676bce8681f68b5'] = $strongarm;

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
    '77e5c0d982e30bb10704d37c60b68d0fc6416d996a3c91af69f82f1e89181ae2' => 'public://css/css_IH9JEM9cIlTi9W3l2KhaCb9culGXjW6BqI92GgYRPFo.css',
    '242e6dfb4beedcd32453f25ff82cbf2cd2c9c898de397f2099cd7398dd8ac1d6' => 'public://css/css_kvaqtp5WyrrHbRp04EMjxDRU1slGUfavu9v2bsvcoDU.css',
    'd10113e368831fc440faeb643972574b8da13c44a725cd258edc50da5e73c3ed' => 'public://css/css_srzbpqzSh72yFKezBNd-UWtQY3K9EBW-stKI4JUOjxM.css',
    '5e69f12d733ac672e2614a7cb3b54dd12be8245bf4a7aa8f30c244e4634e7aca' => 'public://css/css_quW47FRmfqvjanHOMKuGByzNkMTB8GEeRnQVveDnHK8.css',
    '8908b78ffba9e4cd0b70c75d06732f93b06b28ea4b9a6c04e699e8f512f4efbc' => 'public://css/css_ZECbf18Q47VOp239U5Fy4O1Cx3RXsh3y_RfooFJRyGo.css',
    '9b132e1a8ae4ad3b672cec6f47704e325c9bca19eb320c945f9b945b0ec600aa' => 'public://css/css_nKQJdbA3MG_EgmEEYvJKPRKNf-haa11msDRwdP3Hl_A.css',
    'd98fd1d3bf1775fa96f9c304a5e6b016bcebc115f8d4c8e86dd1fe448e7438ff' => 'public://css/css_eABjlgHY3hOVFah2P0EC5mD36i-BY4VLMWAiqTW_eIQ.css',
    '18d4753d7bec54e6d752d9dc2dca41f88057bdfbfac66b09bee55db86a8669b5' => 'public://css/css_eABjlgHY3hOVFah2P0EC5mD36i-BY4VLMWAiqTW_eIQ.css',
    '28d2c69cebfc35535b71764081c4668dc310082b2f499c3c70424101268cf6ea' => 'public://css/css_f65R7GjoPJqDzMHFduQxjujBBanwTEUvdyNH2_LDdVw.css',
    '4fe40c429e9c182d2006528bad174d96c130c41eafcc238a0fa72358facd2de0' => 'public://css/css_YLqmk-sB2Jo9bwEaIajRT3h8ABNNM08fIPkPSkURO0I.css',
    '1ac6c78e4e02af8cf668c8c4ad574cde77cefe49eced00a294415951da9b48d4' => 'public://css/css_YLqmk-sB2Jo9bwEaIajRT3h8ABNNM08fIPkPSkURO0I.css',
    '71c554f91ecb18bf2e579ddd06d0ad687fd0dc4a8961900cae916e87d4134a30' => 'public://css/css_AjkJOp0TCrHkhsfgG1V-9gUKPyVq9eCmHFCMH6MziVU.css',
    'c7b3203b769381968c390f5566a4aedc0c3c9cc449bb3542da64c9e2e599fedc' => 'public://css/css_4M9SbzhY_9kdp76jmdDFI2zPHWQ_ozAjbstKiykwrqM.css',
    'b36bb801e56d2f26bb9717d316da7d63e2cbdc817946e6da550ffc1e13269da6' => 'public://css/css_4M9SbzhY_9kdp76jmdDFI2zPHWQ_ozAjbstKiykwrqM.css',
    '99f342077edafd6d09de986fe234ce4a1581877a1c403b813d69b1f356be2ca1' => 'public://css/css_BhJzcZPJniSXlyNOGrnVx5mV-FFyIOiJeaEh8Md9i8g.css',
    '32b06d7506cd8a669014ee615f243b789ded470865cdac9d31081ed29d22a181' => 'public://css/css_CKoWqiBj9gVXhPuDSnNphuEB0b0J2To76x0pX0EGqn4.css',
    'a82887b5856af44fff54ad8ebef284ef43d01c638c45c3a99c0170a0bbad64fd' => 'public://css/css_RUyJHWS6zlsk-4x1CpoiWkd4GSTzcrxmrSCu28WK7mE.css',
    '7ff2e5296467605e72dccde34db3559148db361ce7f2b965a1f49ae0e847d124' => 'public://css/css_botNHIYRQPys-RH2iA3U4LbV9bPNRS64tLAs8ec1ch8.css',
    'f6333cce64aa3f6733c1521751c2f98be504909110f5be4497b52003538aedf1' => 'public://css/css_K-TOZbJJEgrTyoy_GEb1H5i9ZV_tKX7HRSq_3ZZwYDE.css',
    'c6ff3d04fe80f87170d97261a0cffb566f7377290640fbc71599d72ee63f59f6' => 'public://css/css_83AQjnoB06tQr1xyS45a3HH_PPItCLdQt1iwioAkJK0.css',
    '1e3e3d312563e0f4c22eb50f8a169c30f17b6aa70ee56db5c03eafc6130dae7a' => 'public://css/css_VN1VgXG0X96PzfQHnZq0apMWIdwFDxmv9Tq0YsezYCk.css',
    '248987d243b99dbf1ee3a0a2e675362349ca8324208c39ac5b1a71ae1fefdeda' => 'public://css/css_IgRlhtFJocuLlyq2rKjQQgB_YPDM609t3JimN9dqQHE.css',
    '5a809c2f3538dfa993a982db272b2d34219c8699a38aba3b239bfaf5a1e3d8b4' => 'public://css/css_uP4lKRdT1UalfkWNEsx-RwA-JdHSObk_bYz6ICr8lC0.css',
    'd346c01f10cda1e3ba32065b3d8442d045621997c294de9e634aeb4a6e60a218' => 'public://css/css_uP4lKRdT1UalfkWNEsx-RwA-JdHSObk_bYz6ICr8lC0.css',
    'e0daef143377c6204f651f4842ac9d288bf5aa892c1473037e80f339f406b349' => 'public://css/css_KLXbUEzITkYuWCpgH_F92yPh1Ga5-bbN2hS1_XtB6ww.css',
    'f541c817194db46b891a13da3bf09d55e2047f9b757c2dc1502f63a334a24c67' => 'public://css/css_XhYxZ_ng2jca1WM9SsQVmmB4dm5w45ACMiedHXH3m2Y.css',
  );
  $export['drupal_css_cache_files'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_http_request_fails';
  $strongarm->value = FALSE;
  $export['drupal_http_request_fails'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_js_cache_files';
  $strongarm->value = array(
    'f2e1641e11e2fc44126ad3299405587c1714c62f873c65a87599551c70a3df71' => 'public://js/js_eEsOaD5D2B3Wri_f2KkBOwzQoBf3Rw5yyXCXn9UImq0.js',
    '2a2c476dfe2c6f23ff8a02ef04eabda5416849b18a8c48abf9d4c5c2673c5dc2' => 'public://js/js_ZFC9eRnW1wCqhHn9Eu9CruMPefY2_r6eo_HnrHT7OnM.js',
    'a6dc51111ca7885d72f8d11a43d1621814443f0bd7d04dbc95f307d4f254d9e4' => 'public://js/js_lHeL0WbAjSr6rQ_CBXVEajk8jKcw7r5-EPFG7ahYSrg.js',
    'c102b402695d74a17807892b75ad627f7f39e81f6c7a02e0d9f27ce3b7677bdd' => 'public://js/js_WJW3b4efqWuBhy1cz3PSIVekkenDKZGUifn75PpPZ8g.js',
    'c162c900831d8a9b985080c996972e02d7c9b6a263680a4fe2eafdfb23d46021' => 'public://js/js_ByQqoFmos53DlLDLfNaeXBXbxiumZmAoP08wXIegdFk.js',
    'dc42caa4d92e85029cc0efb58e912bcbc9cc068ae0028cefebd3f47eac16adaa' => 'public://js/js_eEsOaD5D2B3Wri_f2KkBOwzQoBf3Rw5yyXCXn9UImq0.js',
    'a0c6421760cbd7c3f249f45c9aaf6da275f35518d927eb7b3e5f3f503ffb1cc7' => 'public://js/js_oO23jf4wYZXQZWAOM9cIRx-qgcacCB8LnI2NcTLCHds.js',
    '1948ea3ecdf24344917084522a4e596881b1080accf95529b71e005a6c796e5a' => 'public://js/js_lHeL0WbAjSr6rQ_CBXVEajk8jKcw7r5-EPFG7ahYSrg.js',
    '7d8a107b5aea02e07f9d2caa46d00d3fe0eb8dcfff762de44635e0bf58793b7e' => 'public://js/js_37SAprpt25gIk4IkskxbJqFabWfhQy9JArtHwY_zTBg.js',
    '2f20cbe333f708bcb15e7378cb2d1f541e64ab5a8891b616cf5f85e040eaf68e' => 'public://js/js_HOImJ1cRpDzb-Rj9Kp0wNFCNa2hRy2iiPrFIBDiW45Q.js',
    '15d32c82267bb1519a9e3e002081f835720061b77a863e7c67aca092ea580bf4' => 'public://js/js_BkUYO10MJpaXerEdpREj5H25-mErYQietq5LVN8bdow.js',
    '14d33c8aa6e993ad5b42441176832ac12e9fdf6f80c3e43a2f915ec21aa3c4c2' => 'public://js/js_SW8UH0DQXXaqj0qzoivV_tklenOpjOnAUEvU9w1kyvw.js',
    '55be2b6bdcff98f3c19241d70cb612a16f1ac2f419ffb060455c70e484d6b512' => 'public://js/js_8ZcfGvC9m3SPgmdGF37z2LRUFiBA2yeUFKPo5Q0mONA.js',
    '79a131500d93253587cf92585c0682cef0fbf1fa592af26d0cade643131a7d3f' => 'public://js/js_m3DX83zaIvDUbn2BqKMKl_jOKaeUT1EI00TFQtdXm10.js',
  );
  $export['drupal_js_cache_files'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_private_key';
  $strongarm->value = 'MgF9taO_hB429dLF0z3BAVN4wCp9q4WVL1ZCWbAJJ3U';
  $export['drupal_private_key'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'featrues_tools_disable_features_page_js';
  $strongarm->value = 0;
  $export['featrues_tools_disable_features_page_js'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_codecache';
  $strongarm->value = array(
    'pro_101_authoring_infrastructure' => array(
      'dependencies' => 'ee6df3db8892058ae0aef6297fb35d96',
      'user_permission' => '050b501990fa766402a2ea3e09ec5eea',
      'filter' => '9e9f3a6246b2231aa3f9e6bd9a22627c',
      'ckeditor_profile' => '02485436ca0a441ac2e2b5f44198c51d',
    ),
    'pro_101_build_infrastructure' => array(
      'dependencies' => '109279d27401911a59ea045d80f6515d',
      'user_role' => 'a0a90752e327f8b93ed391d4253be2a7',
      'user_permission' => '81dd82cd3575e7202871a99e7d72536d',
      'variable' => '1c597e25fbf01da39717ac4c1c85b335',
    ),
    'pro_101_core_infrastructure' => array(
      'dependencies' => '38f70045ca02d0c80e43deed4117cc7f',
      'user_permission' => '446c82001fd6252788280b4cdf3c20c2',
      'variable' => '627ac30152b4f362b795541413e1fb05',
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
    'pro_101_user_infrastructure' => array(
      'dependencies' => '9a43ea6d4fa09137853a08938f746e13',
      'field' => '4e2185239ddac64294b4d5b4cad43460',
      'user_permission' => '14c486d27f6daf9c7807354737dfe7a4',
      'variable' => '82ae659c39fe10e2a863cb8a7ec1fd89',
    ),
    'pro_101_about_feature_p' => array(
      'dependencies' => 'c4c4657cc65e665d8c5a4e27d3a45ddd',
      'context' => 'a0d3cb0102b86be4c3c998977e31390f',
      'views_view' => 'ca0df7f9bf28d1da4750efe4897f67e3',
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
      'dependencies' => 'dc7ed505e22c455f6b0d4d23008103e2',
      'field' => '2e73b5ec6873eda14a5713047699f73a',
      'taxonomy' => '97332887653d7e72b1b776161f786c6d',
      'user_permission' => 'cd710adda2c88ea176e16483ea4367c6',
      'variable' => '0769e75e3cbca203dd626db95b3e34bb',
      'uuid_term' => '3e2b3909a6d157d776cf2c1079fbf11e',
      'context' => 'b2f221551ca2b73322e688008c33c1b7',
      'node' => '6dba0cc1c5af2a57bc90b9c7db03f925',
      'ds_layout_settings' => '4de1b5c875e465a9641c0f04c5b53401',
      'rel_builds' => '3e9c8f83c5663722c955404a0d374b6d',
      'views_view' => '5425fa3d9819b1fad6c94882e989b197',
      'ds_field_settings' => '02959fc4cfa05f35010b762c44beff02',
      'ds_fields' => '97819edf69792a09d500d15e5c0af838',
    ),
    'pro_101_contact_feature' => array(
      'dependencies' => 'fca25e384382b84feffc41fb69360938',
      'field' => 'b2d931295447a5dce631654760f54bde',
      'user_permission' => '7820caa0e93fce51ee0507b461342e99',
      'variable' => 'b636146856886a53df30c110bfc06bd2',
      'node' => '4993f56036a9255899650871783537c0',
    ),
    'pro_101_home_feature' => array(
      'dependencies' => 'b99cc583534a298102323651da169967',
      'content_menu_links' => '3fbc474f52776e53893a28ea867507c5',
    ),
    'pro_101_page_feature' => array(
      'dependencies' => '210d99e823df4a16af932d2d507e1489',
      'field' => 'f3a10cb102c53b304f56ec1944827a8f',
      'user_permission' => 'ecc4eeb895fb373f76dbc997d2e9c19f',
      'variable' => '3d4e6163bb59cacd6664b5022f9d51a5',
      'node' => '0967447a3999c3dd3effe625128085d7',
    ),
    'pro_101_specialties_feature' => array(
      'dependencies' => '3fd57e84bbefce54aa0a51208e182b91',
      'field' => '1a5e8d73aae3d8e843b9808a03b2eed0',
      'user_permission' => 'edd7522155da3caad6441ba22bc2d927',
      'variable' => '02fcba4f8a9f563bf33e6293dd3314d9',
      'node' => '8f8affae0aa14b7b2a4d97e71100d5e5',
      'views_view' => '407d4dbaf5372f2aa55dd4ef4c5b7783',
    ),
    'pro_101_testimonials_feature' => array(
      'dependencies' => '5be28e167911d1f02c245043845c4dca',
      'user_permission' => '35c3795798cb01acd9034ef71288be8d',
      'field' => '59c26b6e0b742a8cf8dfbd46cb326e68',
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
      'dependencies' => 'eb5efd4139a271a8606fd726aa37006b',
      'variable' => 'b8487aa4f86cf4d1cde7ab2c2ca3e472',
      'content' => '212ba393bc80ee6915466ab97cbf7e77',
      'context' => '270cbf500399c9e93b4bc7f6435ed53f',
      'ds_layout_settings' => '7ad1d38adc558d0608a90fcc4b542e2c',
    ),
    'pro_101_answers_content' => array(
      'dependencies' => '2642f380d066716b453ee0543b513e20',
      'content_menu_links' => 'b649379bc619e6493e4b73392f831443',
      'content' => 'fd0590fc945a5da9b0bdfe772660cf3c',
    ),
    'pro_101_blog_content' => array(
      'dependencies' => '6dde91b84b0f67e2186b84317c2ca343',
      'content_menu_links' => '5836868d04a3fd1194205ace2663293f',
      'content' => 'f83222dc24905ca5d9e98fea59e2363a',
    ),
    'pro_101_default_theme' => array(
      'dependencies' => 'f03a961a51b71e563dcd8bc36350cdc2',
      'filter' => '88cfa6361e000874caa65515923bb060',
      'user_permission' => '512e9c9279b5f69c62903828e12c3ed2',
      'variable' => 'a8bca2a7744e41bcccb5d660347e2004',
    ),
    'pro_101_specialties_content' => array(
      'dependencies' => 'b99cc583534a298102323651da169967',
      'content_menu_links' => 'f070b5085da70c5f5bc915e6c3db44e3',
      'content' => '8c3713cd203e7a2d0d5f56b4541617ea',
    ),
    'pro_101_support_infrastructure' => array(
      'dependencies' => 'fbae10209964890000c6f75e50307995',
      'variable' => '3a8f37529a03564c10e116d02ce2dfe4',
      'user_permission' => '0156981559b35b9e7dbb47d4691b9365',
    ),
    'pro_101_about_content' => array(
      'content' => 'd3aee0558d59f028f6d7437ed4f20688',
    ),
    'pro_101_testimonials_content' => array(
      'content' => 'de8e50c62d4ecebe9de5423e2b713c36',
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
    'pro_101_ignore' => array(
      'dependencies' => 'e410ca96d90029817c7bb9c7cb1f7ea4',
      'variable' => '90077fc4c2e5d878b9bed9eb2935a34c',
    ),
  );
  $export['features_codecache'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_ignored_orphans';
  $strongarm->value = array(
    'admin' => 'admin',
    'admin_menu' => 'admin_menu',
    'admin_select' => 'admin_select',
    'diff' => 'diff',
    'features_tools' => 'features_tools',
    'filter_perms' => 'filter_perms',
    'git_deploy' => 'git_deploy',
    'module_filter' => 'module_filter',
    'role_export' => 'role_export',
  );
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
  $strongarm->value = 1336969323;
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
    1 => 251,
    2 => 250,
    3 => 245,
    4 => 125,
    5 => 124,
    6 => 123,
    7 => 122,
    8 => 121,
    9 => 117,
    10 => 63,
    11 => 62,
    12 => 61,
    13 => 60,
    14 => 59,
    15 => 58,
    16 => 45,
    17 => 44,
    18 => 31,
    19 => 30,
    20 => 29,
    21 => 27,
    22 => 24,
    23 => 23,
    24 => 22,
    25 => 21,
    26 => 15,
    27 => 14,
    28 => 13,
    29 => 11,
    30 => 10,
    31 => 7,
    32 => 6,
    33 => 5,
    34 => 4,
    35 => 3,
    36 => 2,
    37 => 1,
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
  $strongarm->name = 'rel_build_form_registration';
  $strongarm->value = 1;
  $export['rel_build_form_registration'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_publisherID';
  $strongarm->value = 'dr-2b73423-1236-8a46-7a6e-a8b785fa61da';
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
  $strongarm->value = 'prostarter';
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
