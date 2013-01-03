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

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab';
  $strongarm->value = 'edit-context';
  $export['additional_settings__active_tab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_block';
  $strongarm->value = 'edit-workflow';
  $export['additional_settings__active_tab_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_blog';
  $strongarm->value = 'edit-workflow';
  $export['additional_settings__active_tab_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_faq';
  $strongarm->value = 'edit-rabbit-hole';
  $export['additional_settings__active_tab_faq'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_featured';
  $strongarm->value = 'edit-workflow';
  $export['additional_settings__active_tab_featured'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_page';
  $strongarm->value = 'edit-workflow';
  $export['additional_settings__active_tab_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_specialty';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_specialty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_testimonial';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_testimonial'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_webform';
  $strongarm->value = 'edit-rabbit-hole';
  $export['additional_settings__active_tab_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_display';
  $strongarm->value = '0';
  $export['admin_menu_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_show_all';
  $strongarm->value = 0;
  $export['admin_menu_show_all'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'agrcache_css_cache_files';
  $strongarm->value = array(
    'files' => array(
      '22cd4fb945ab029cf3125bbcbe9b5e4c6335c7c26fe8f919bfafd12d0845b804' => 'public://css/css_0LutdxqKWsX5RGeREJaTrsodZ21EztSPhRSFf30-b9A.css',
      'b4997b98aa6bbdb9a06a4307af5dc664ccd2e359df01670784f498342feec1f6' => 'public://css/css_WwjZ6W1JYXeLA1JEN1d1Rw4k9hdOsNVNqxG3P9WwLYc.css',
      '23b5acb7e032842fb10979a848de461ee39e5e2f5fef2593132b239f5d733925' => 'public://css/css_WrpKnQPbXT0IWtfuj3tQ4oNPuPJwLVlk9KThmIkSKHk.css',
      '22d7e5261ba7f969869b13470e0751fe63cc7eaa29159d62b41d32a01618e2be' => 'public://css/css_T-tqQLoA09BSsl2yHtAAfudcDVVq4KqDvuXKvrNIOXE.css',
      '09b542d6612e6966fced8bafe5609b4ef6e86ebf55f9ac7d5d1321a992a9b1e7' => 'public://css/css_0LutdxqKWsX5RGeREJaTrsodZ21EztSPhRSFf30-b9A.css',
      '47ec60a6d1b674ea30ecb72433d8c08a5c65ad5360b4115eb82f1e7a0247590d' => 'public://css/css_WwjZ6W1JYXeLA1JEN1d1Rw4k9hdOsNVNqxG3P9WwLYc.css',
      '344ab66675864e5108ba7ed02ac9a0e4d03ea22a8d1e43ebbde481c8b8440f4c' => 'public://css/css_WrpKnQPbXT0IWtfuj3tQ4oNPuPJwLVlk9KThmIkSKHk.css',
      'df8fdac5a72e8b9e42454141c14667098d79d9a1fc31afcc88dec7782e0175db' => 'public://css/css_BJsyVOg8Jurd4ONHSVD_iUPbsNibI3QmbM45NEPh2lI.css',
      '4f7510382728fba0621914e75e34c385d362f97a1267f8ce2886e62c2ef4ec6e' => 'public://css/css_vaGsWlDzpHQsNc3db4WsM59KIcc52G0rSTIr4pRdaZQ.css',
      'f73bcf510844d72f6b9076d47335dc4fd92961239f7229cc94f67195d8a5c37d' => 'public://css/css_HNWVC9YEGUuKLlhpuhFwQl2oEe2bJaRS9iOuEXuVl8g.css',
      'c2c90ac2c123c4c7be969b295002bac6614b444c8eedbd7940119258e7174e30' => 'public://css/css_z9PVouzxKBBhvED8ScXiiEUcIXhgXgV988WOkXelt9o.css',
    ),
    'callbacks' => array(
      'public://css/css_0LutdxqKWsX5RGeREJaTrsodZ21EztSPhRSFf30-b9A.css' => array(
        0 => array(
          'group' => -100,
          'every_page' => TRUE,
          'type' => 'file',
          'weight' => 0.014,
          'media' => 'all',
          'preprocess' => TRUE,
          'data' => 'modules/system/system.messages.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
      ),
      'public://css/css_WwjZ6W1JYXeLA1JEN1d1Rw4k9hdOsNVNqxG3P9WwLYc.css' => array(
        0 => array(
          'group' => -100,
          'type' => 'file',
          'weight' => 0.01,
          'every_page' => FALSE,
          'media' => 'all',
          'preprocess' => TRUE,
          'data' => 'sites/all/themes/rubik/css/overlay-child.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        1 => array(
          'data' => 'sites/all/modules/contrib/jquery_update/replace/ui/themes/base/minified/jquery.ui.core.min.css',
          'group' => -100,
          'type' => 'file',
          'weight' => 0.025,
          'every_page' => FALSE,
          'media' => 'all',
          'preprocess' => TRUE,
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        2 => array(
          'data' => 'sites/all/modules/contrib/jquery_update/replace/ui/themes/base/minified/jquery.ui.theme.min.css',
          'group' => -100,
          'type' => 'file',
          'weight' => 0.026,
          'every_page' => FALSE,
          'media' => 'all',
          'preprocess' => TRUE,
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        3 => array(
          'group' => -100,
          'type' => 'file',
          'weight' => 0.054,
          'every_page' => FALSE,
          'media' => 'all',
          'preprocess' => TRUE,
          'data' => 'modules/contextual/contextual.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
      ),
      'public://css/css_WrpKnQPbXT0IWtfuj3tQ4oNPuPJwLVlk9KThmIkSKHk.css' => array(
        0 => array(
          'every_page' => TRUE,
          'media' => 'all',
          'type' => 'file',
          'group' => 0,
          'weight' => 0.016,
          'preprocess' => TRUE,
          'data' => 'modules/field/theme/field.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        1 => array(
          'every_page' => TRUE,
          'media' => 'all',
          'type' => 'file',
          'group' => 0,
          'weight' => 0.017,
          'preprocess' => TRUE,
          'data' => 'sites/all/modules/contrib/google_analytics_reports/google_analytics_reports/google_analytics_reports.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        2 => array(
          'every_page' => TRUE,
          'media' => 'all',
          'type' => 'file',
          'group' => 0,
          'weight' => 0.018,
          'preprocess' => TRUE,
          'data' => 'sites/all/modules/contrib/google_cse/google_cse.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        3 => array(
          'every_page' => TRUE,
          'media' => 'all',
          'type' => 'file',
          'group' => 0,
          'weight' => 0.019,
          'preprocess' => TRUE,
          'data' => 'sites/all/modules/contrib/mollom/mollom.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        4 => array(
          'every_page' => TRUE,
          'media' => 'all',
          'type' => 'file',
          'group' => 0,
          'weight' => 0.023,
          'preprocess' => TRUE,
          'data' => 'sites/all/modules/contrib/views/css/views.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
      ),
      'public://css/css_T-tqQLoA09BSsl2yHtAAfudcDVVq4KqDvuXKvrNIOXE.css' => array(
        0 => array(
          'type' => 'file',
          'group' => 0,
          'weight' => 0.007,
          'every_page' => FALSE,
          'media' => 'all',
          'preprocess' => TRUE,
          'data' => 'sites/all/modules/contrib/ckeditor/ckeditor.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        1 => array(
          'type' => 'file',
          'group' => 0,
          'weight' => 0.008,
          'every_page' => FALSE,
          'media' => 'all',
          'preprocess' => TRUE,
          'data' => 'sites/all/modules/contrib/colorbox/styles/stockholmsyndrome/colorbox_stockholmsyndrome.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        2 => array(
          'type' => 'file',
          'group' => 0,
          'weight' => 0.009,
          'every_page' => FALSE,
          'media' => 'all',
          'preprocess' => TRUE,
          'data' => 'sites/all/modules/contrib/ctools/css/ctools.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        3 => array(
          'type' => 'file',
          'group' => 0,
          'weight' => 0.01,
          'every_page' => FALSE,
          'media' => 'all',
          'preprocess' => TRUE,
          'data' => 'sites/all/modules/contrib/lexicon/css/lexicon.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        4 => array(
          'type' => 'file',
          'group' => 0,
          'weight' => 0.025,
          'every_page' => FALSE,
          'media' => 'all',
          'preprocess' => TRUE,
          'data' => 'sites/all/modules/contrib/views_slideshow/views_slideshow.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        5 => array(
          'type' => 'file',
          'group' => 0,
          'weight' => 0.028,
          'every_page' => FALSE,
          'media' => 'all',
          'preprocess' => TRUE,
          'data' => 'sites/all/modules/contrib/context/plugins/context_reaction_block.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        6 => array(
          'group' => 0,
          'type' => 'file',
          'weight' => 0.03,
          'every_page' => FALSE,
          'media' => 'all',
          'preprocess' => TRUE,
          'data' => 'sites/all/themes/rubik/css/shortcut.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        7 => array(
          'type' => 'theme',
          'group' => 0,
          'weight' => 0.031,
          'every_page' => FALSE,
          'media' => 'all',
          'preprocess' => TRUE,
          'data' => 'sites/all/modules/contrib/views/css/views-admin.seven.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
      ),
      'public://css/css_BJsyVOg8Jurd4ONHSVD_iUPbsNibI3QmbM45NEPh2lI.css' => array(
        0 => array(
          'type' => 'file',
          'group' => 0,
          'weight' => 0.007,
          'every_page' => FALSE,
          'media' => 'all',
          'preprocess' => TRUE,
          'data' => 'sites/all/modules/contrib/ckeditor/ckeditor.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        1 => array(
          'type' => 'file',
          'group' => 0,
          'weight' => 0.008,
          'every_page' => FALSE,
          'media' => 'all',
          'preprocess' => TRUE,
          'data' => 'sites/all/modules/contrib/ctools/css/ctools.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        2 => array(
          'type' => 'file',
          'group' => 0,
          'weight' => 0.009,
          'every_page' => FALSE,
          'media' => 'all',
          'preprocess' => TRUE,
          'data' => 'sites/all/modules/contrib/lexicon/css/lexicon.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        3 => array(
          'type' => 'file',
          'group' => 0,
          'weight' => 0.024,
          'every_page' => FALSE,
          'media' => 'all',
          'preprocess' => TRUE,
          'data' => 'sites/all/modules/contrib/views_slideshow/views_slideshow.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        4 => array(
          'type' => 'file',
          'group' => 0,
          'weight' => 0.027,
          'every_page' => FALSE,
          'media' => 'all',
          'preprocess' => TRUE,
          'data' => 'sites/all/modules/contrib/context/plugins/context_reaction_block.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        5 => array(
          'group' => 0,
          'type' => 'file',
          'weight' => 0.029,
          'every_page' => FALSE,
          'media' => 'all',
          'preprocess' => TRUE,
          'data' => 'sites/all/themes/rubik/css/shortcut.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        6 => array(
          'type' => 'theme',
          'group' => 0,
          'weight' => 0.03,
          'every_page' => FALSE,
          'media' => 'all',
          'preprocess' => TRUE,
          'data' => 'sites/all/modules/contrib/views/css/views-admin.seven.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
      ),
      'public://css/css_vaGsWlDzpHQsNc3db4WsM59KIcc52G0rSTIr4pRdaZQ.css' => array(
        0 => array(
          'group' => 100,
          'every_page' => TRUE,
          'media' => 'all',
          'type' => 'file',
          'weight' => 0,
          'preprocess' => TRUE,
          'data' => 'sites/all/themes/tao/reset.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        1 => array(
          'group' => 100,
          'every_page' => TRUE,
          'media' => 'all',
          'type' => 'file',
          'weight' => 0.001,
          'preprocess' => TRUE,
          'data' => 'sites/all/themes/tao/base.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
      ),
      'public://css/css_HNWVC9YEGUuKLlhpuhFwQl2oEe2bJaRS9iOuEXuVl8g.css' => array(
        0 => array(
          'group' => 100,
          'every_page' => TRUE,
          'media' => 'screen',
          'type' => 'file',
          'weight' => 0.002,
          'preprocess' => TRUE,
          'data' => 'sites/all/themes/tao/drupal.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        1 => array(
          'group' => 100,
          'every_page' => TRUE,
          'media' => 'screen',
          'type' => 'file',
          'weight' => 0.003,
          'preprocess' => TRUE,
          'data' => 'sites/all/themes/rubik/css/core.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        2 => array(
          'group' => 100,
          'every_page' => TRUE,
          'media' => 'screen',
          'type' => 'file',
          'weight' => 0.004,
          'preprocess' => TRUE,
          'data' => 'sites/all/themes/rubik/css/icons.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
        3 => array(
          'group' => 100,
          'every_page' => TRUE,
          'media' => 'screen',
          'type' => 'file',
          'weight' => 0.005,
          'preprocess' => TRUE,
          'data' => 'sites/all/themes/rubik/css/style.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
      ),
      'public://css/css_z9PVouzxKBBhvED8ScXiiEUcIXhgXgV988WOkXelt9o.css' => array(
        0 => array(
          'group' => 100,
          'every_page' => TRUE,
          'media' => 'print',
          'type' => 'file',
          'weight' => 0.006,
          'preprocess' => TRUE,
          'data' => 'sites/all/themes/rubik/css/print.css',
          'browsers' => array(
            '!IE' => TRUE,
            'IE' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['agrcache_css_cache_files'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'agrcache_js_cache_files';
  $strongarm->value = array(
    'files' => array(
      '8d321faf0786e996119740f4b8ae2cfedff1432c052c1daebc02c66d1d621cb0' => 'public://js/js_pIep5nduumpKJ71GsQ2iRhKyVGps9u6Jf0gzO6ACiJE.js',
      '794efc2465b2c1f1168dacf453f03ea4309b4b1deabea35c9c53b400f9bc2185' => 'public://js/js_twu1c89YYevEkZa-Zlwuy4kMlKQBkflFU73KlVuJXRA.js',
      '5279c65eecc5c3f34e9e65506154ee97372240aee8267b3cd869b7918ec75432' => 'public://js/js_Xpcs9CPLyDR4I_XlAt5gs1EukL6-lq3ANyopg8dtL4o.js',
      '3771a8473fbc3bf992a0752393d39fe23f09aa45ebcb411af34bb2ec32cc93d2' => 'public://js/js_XY6O-7tD5uIbu0RCXvcMu7OGR2wl5DvGUccUdYA9Z9Q.js',
      '2a8a523fa7430b76ef2677d43cd9c8a327cb4dcb377677257c82fad6b407950d' => 'public://js/js_4rPwjcsA1hzlHx2nz9_sLU0PwvjYpTcC3zy11uUsKH4.js',
      'b3e8d5f32f0862a3cbf72e667575b084ba26f4ffba6309bb14e665a11045d3d5' => 'public://js/js_pIep5nduumpKJ71GsQ2iRhKyVGps9u6Jf0gzO6ACiJE.js',
      '3254cd38cebaee6a2f9b11777b87d8555194e75edbcb140822d5f760b42fdad6' => 'public://js/js_twu1c89YYevEkZa-Zlwuy4kMlKQBkflFU73KlVuJXRA.js',
      '6d7bd6eecfc40a1299df7917f88f24f6dc3b9ae2772e6d6f08df0377ff24757e' => 'public://js/js_t5QXcYdeCnlCZiYj7BS1O_rvzHR7gLW0MJURnh5uWNs.js',
      'c162c900831d8a9b985080c996972e02d7c9b6a263680a4fe2eafdfb23d46021' => 'public://js/js_MD3UdFao9PwcMtLZGJX8QD3RUqjOjfZJnSlWp_vGFQc.js',
    ),
    'callbacks' => array(
      'public://js/js_pIep5nduumpKJ71GsQ2iRhKyVGps9u6Jf0gzO6ACiJE.js' => array(
        'modules/overlay/overlay-child.js' => array(
          'version' => '1.0',
          'group' => -100,
          'type' => 'file',
          'every_page' => FALSE,
          'weight' => 0.006,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'data' => 'modules/overlay/overlay-child.js',
        ),
        'modules/contextual/contextual.js' => array(
          'version' => '1.0',
          'group' => -100,
          'type' => 'file',
          'every_page' => FALSE,
          'weight' => 0.037,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'data' => 'modules/contextual/contextual.js',
        ),
        'misc/form.js' => array(
          'group' => -100,
          'weight' => 1.017,
          'version' => '7.15',
          'type' => 'file',
          'every_page' => FALSE,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'data' => 'misc/form.js',
        ),
        'misc/ajax.js' => array(
          'group' => -100,
          'weight' => 2.02,
          'version' => '7.15',
          'type' => 'file',
          'every_page' => FALSE,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'data' => 'misc/ajax.js',
        ),
      ),
      'public://js/js_twu1c89YYevEkZa-Zlwuy4kMlKQBkflFU73KlVuJXRA.js' => array(
        'sites/all/modules/contrib/colorbox_node/colorbox_node.js' => array(
          'every_page' => TRUE,
          'type' => 'file',
          'group' => 0,
          'weight' => 0.007,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'version' => NULL,
          'data' => 'sites/all/modules/contrib/colorbox_node/colorbox_node.js',
        ),
        'sites/all/modules/contrib/contentanalysis/contentanalysis.js' => array(
          'every_page' => TRUE,
          'type' => 'file',
          'group' => 0,
          'weight' => 0.008,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'version' => NULL,
          'data' => 'sites/all/modules/contrib/contentanalysis/contentanalysis.js',
        ),
        'sites/all/modules/contrib/contentoptimizer/contentoptimizer.js' => array(
          'every_page' => TRUE,
          'type' => 'file',
          'group' => 0,
          'weight' => 0.009,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'version' => NULL,
          'data' => 'sites/all/modules/contrib/contentoptimizer/contentoptimizer.js',
        ),
        'sites/all/modules/contrib/google_analytics_reports/google_analytics_reports/google_analytics_reports.js' => array(
          'every_page' => TRUE,
          'type' => 'file',
          'group' => 0,
          'weight' => 0.01,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'version' => NULL,
          'data' => 'sites/all/modules/contrib/google_analytics_reports/google_analytics_reports/google_analytics_reports.js',
        ),
        'sites/all/modules/contrib/google_cse/google_cse.js' => array(
          'every_page' => TRUE,
          'type' => 'file',
          'group' => 0,
          'weight' => 0.011,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'version' => NULL,
          'data' => 'sites/all/modules/contrib/google_cse/google_cse.js',
        ),
      ),
      'public://js/js_Xpcs9CPLyDR4I_XlAt5gs1EukL6-lq3ANyopg8dtL4o.js' => array(
        'sites/all/libraries/colorbox/colorbox/jquery.colorbox-min.js' => array(
          'type' => 'file',
          'group' => 0,
          'every_page' => FALSE,
          'weight' => 0.006,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'version' => NULL,
          'data' => 'sites/all/libraries/colorbox/colorbox/jquery.colorbox-min.js',
        ),
        'sites/all/modules/contrib/colorbox/js/colorbox.js' => array(
          'type' => 'file',
          'group' => 0,
          'every_page' => FALSE,
          'weight' => 0.007,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'version' => NULL,
          'data' => 'sites/all/modules/contrib/colorbox/js/colorbox.js',
        ),
        'sites/all/modules/contrib/colorbox/styles/stockholmsyndrome/colorbox_stockholmsyndrome.js' => array(
          'type' => 'file',
          'group' => 0,
          'every_page' => FALSE,
          'weight' => 0.008,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'version' => NULL,
          'data' => 'sites/all/modules/contrib/colorbox/styles/stockholmsyndrome/colorbox_stockholmsyndrome.js',
        ),
        'sites/all/modules/contrib/colorbox/js/colorbox_load.js' => array(
          'type' => 'file',
          'group' => 0,
          'every_page' => FALSE,
          'weight' => 0.009,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'version' => NULL,
          'data' => 'sites/all/modules/contrib/colorbox/js/colorbox_load.js',
        ),
        'sites/all/modules/contrib/colorbox/js/colorbox_inline.js' => array(
          'type' => 'file',
          'group' => 0,
          'every_page' => FALSE,
          'weight' => 0.01,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'version' => NULL,
          'data' => 'sites/all/modules/contrib/colorbox/js/colorbox_inline.js',
        ),
        'sites/all/modules/contrib/views_slideshow/js/views_slideshow.js' => array(
          'type' => 'file',
          'group' => 0,
          'every_page' => FALSE,
          'weight' => 0.017,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'version' => NULL,
          'data' => 'sites/all/modules/contrib/views_slideshow/js/views_slideshow.js',
        ),
        'misc/progress.js' => array(
          'group' => 0,
          'version' => '7.15',
          'type' => 'file',
          'every_page' => FALSE,
          'weight' => 0.018,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'data' => 'misc/progress.js',
        ),
      ),
      'public://js/js_XY6O-7tD5uIbu0RCXvcMu7OGR2wl5DvGUccUdYA9Z9Q.js' => array(
        'sites/all/modules/contrib/context/plugins/context_reaction_block.js' => array(
          'type' => 'file',
          'group' => 0,
          'every_page' => FALSE,
          'weight' => 0.022,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'version' => NULL,
          'data' => 'sites/all/modules/contrib/context/plugins/context_reaction_block.js',
        ),
        'misc/collapse.js' => array(
          'group' => 0,
          'version' => '7.15',
          'type' => 'file',
          'every_page' => FALSE,
          'weight' => 0.025,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'data' => 'misc/collapse.js',
        ),
      ),
      'public://js/js_4rPwjcsA1hzlHx2nz9_sLU0PwvjYpTcC3zy11uUsKH4.js' => array(
        'misc/jquery.once.js' => array(
          'group' => -100,
          'weight' => -18.996,
          'version' => '1.2',
          'every_page' => TRUE,
          'type' => 'file',
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'data' => 'misc/jquery.once.js',
        ),
        'misc/drupal.js' => array(
          'data' => 'misc/drupal.js',
          'type' => 'file',
          'scope' => 'header',
          'group' => -100,
          'every_page' => TRUE,
          'weight' => -1,
          'preprocess' => TRUE,
          'cache' => TRUE,
          'defer' => FALSE,
        ),
      ),
      'public://js/js_t5QXcYdeCnlCZiYj7BS1O_rvzHR7gLW0MJURnh5uWNs.js' => array(
        'sites/all/modules/contrib/views_slideshow/js/views_slideshow.js' => array(
          'type' => 'file',
          'group' => 0,
          'every_page' => FALSE,
          'weight' => 0.012,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'version' => NULL,
          'data' => 'sites/all/modules/contrib/views_slideshow/js/views_slideshow.js',
        ),
        'sites/all/modules/contrib/context/plugins/context_reaction_block.js' => array(
          'type' => 'file',
          'group' => 0,
          'every_page' => FALSE,
          'weight' => 0.015,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'version' => NULL,
          'data' => 'sites/all/modules/contrib/context/plugins/context_reaction_block.js',
        ),
        'misc/collapse.js' => array(
          'group' => 0,
          'version' => '7.15',
          'type' => 'file',
          'every_page' => FALSE,
          'weight' => 0.018,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'data' => 'misc/collapse.js',
        ),
        'misc/progress.js' => array(
          'group' => 0,
          'version' => '7.15',
          'type' => 'file',
          'every_page' => FALSE,
          'weight' => 0.019,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'data' => 'misc/progress.js',
        ),
      ),
      'public://js/js_MD3UdFao9PwcMtLZGJX8QD3RUqjOjfZJnSlWp_vGFQc.js' => array(
        'sites/all/themes/rubik/js/rubik.js' => array(
          'group' => 100,
          'every_page' => TRUE,
          'type' => 'file',
          'weight' => 0,
          'scope' => 'header',
          'cache' => TRUE,
          'defer' => FALSE,
          'preprocess' => TRUE,
          'version' => NULL,
          'data' => 'sites/all/themes/rubik/js/rubik.js',
        ),
      ),
    ),
  );
  $export['agrcache_js_cache_files'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'alchemy_apikey';
  $strongarm->value = '';
  $export['alchemy_apikey'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'array_filter';
  $strongarm->value = TRUE;
  $export['array_filter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'block_cache';
  $strongarm->value = 0;
  $export['block_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache';
  $strongarm->value = 1357141372;
  $export['cache_flush_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_block';
  $strongarm->value = 1357164663;
  $export['cache_flush_cache_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_entity_file';
  $strongarm->value = 1357141372;
  $export['cache_flush_cache_entity_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_entity_node';
  $strongarm->value = 1357141372;
  $export['cache_flush_cache_entity_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_entity_taxonomy_term';
  $strongarm->value = 1357141372;
  $export['cache_flush_cache_entity_taxonomy_term'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_entity_taxonomy_vocabulary';
  $strongarm->value = 0;
  $export['cache_flush_cache_entity_taxonomy_vocabulary'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_entity_user';
  $strongarm->value = 1357141372;
  $export['cache_flush_cache_entity_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_field';
  $strongarm->value = 1357141372;
  $export['cache_flush_cache_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_filter';
  $strongarm->value = 0;
  $export['cache_flush_cache_filter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_form';
  $strongarm->value = 0;
  $export['cache_flush_cache_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_image';
  $strongarm->value = 0;
  $export['cache_flush_cache_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_libraries';
  $strongarm->value = 1357141372;
  $export['cache_flush_cache_libraries'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_menu';
  $strongarm->value = 1357141372;
  $export['cache_flush_cache_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_metatag';
  $strongarm->value = 1357141372;
  $export['cache_flush_cache_metatag'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_page';
  $strongarm->value = 1357164663;
  $export['cache_flush_cache_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_path';
  $strongarm->value = 1357141372;
  $export['cache_flush_cache_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_rules';
  $strongarm->value = 1357141372;
  $export['cache_flush_cache_rules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_token';
  $strongarm->value = 1357141372;
  $export['cache_flush_cache_token'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_views';
  $strongarm->value = 1357141372;
  $export['cache_flush_cache_views'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_views_data';
  $strongarm->value = 1357141372;
  $export['cache_flush_cache_views_data'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'context_block_rebuild_needed';
  $strongarm->value = TRUE;
  $export['context_block_rebuild_needed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_key';
  $strongarm->value = 'XLxm3L8Sa4q-xseaML1-AzT9ByIJ1M2ZWaX6rfi98kQ';
  $export['cron_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_last';
  $strongarm->value = 1357141372;
  $export['cron_last'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'css_js_query_string';
  $strongarm->value = 'mg131x';
  $export['css_js_query_string'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ctools_last_cron';
  $strongarm->value = 1357141374;
  $export['ctools_last_cron'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'defaultcontent_hashes';
  $strongarm->value = array(
    0 => 'e77e67271cd3688488bd5f9755aad517',
    1 => 'c9913f8dd14c8ae691a6e8af2041b724',
    2 => '2f1132b273088c7cdfa59405fcc7ed25',
    3 => '214251c488b398afe676bce8681f68b5',
    4 => 'e6634816792080267aba2336dc29d2da',
  );
  $export['defaultcontent_hashes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'defaultcontent_run_08e9aa56cfb396124694cc910e55f807';
  $strongarm->value = TRUE;
  $export['defaultcontent_run_08e9aa56cfb396124694cc910e55f807'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'defaultcontent_run_214251c488b398afe676bce8681f68b5';
  $strongarm->value = TRUE;
  $export['defaultcontent_run_214251c488b398afe676bce8681f68b5'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'defaultcontent_run_2420208fbbca067a92c14df236ed2a2d';
  $strongarm->value = TRUE;
  $export['defaultcontent_run_2420208fbbca067a92c14df236ed2a2d'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'defaultcontent_run_2f1132b273088c7cdfa59405fcc7ed25';
  $strongarm->value = TRUE;
  $export['defaultcontent_run_2f1132b273088c7cdfa59405fcc7ed25'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'defaultcontent_run_c9913f8dd14c8ae691a6e8af2041b724';
  $strongarm->value = TRUE;
  $export['defaultcontent_run_c9913f8dd14c8ae691a6e8af2041b724'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'defaultcontent_run_cbc27b914f14682e75b804ef7d618e84';
  $strongarm->value = TRUE;
  $export['defaultcontent_run_cbc27b914f14682e75b804ef7d618e84'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'defaultcontent_run_e6634816792080267aba2336dc29d2da';
  $strongarm->value = TRUE;
  $export['defaultcontent_run_e6634816792080267aba2336dc29d2da'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'defaultcontent_run_e77e67271cd3688488bd5f9755aad517';
  $strongarm->value = TRUE;
  $export['defaultcontent_run_e77e67271cd3688488bd5f9755aad517'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_api_url';
  $strongarm->value = 'api.drupal.org';
  $export['devel_api_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_error_handlers';
  $strongarm->value = array(
    1 => '1',
  );
  $export['devel_error_handlers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_execution';
  $strongarm->value = '5';
  $export['devel_execution'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_krumo_skin';
  $strongarm->value = 'default';
  $export['devel_krumo_skin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_page_alter';
  $strongarm->value = 0;
  $export['devel_page_alter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_query_display';
  $strongarm->value = 0;
  $export['devel_query_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_query_sort';
  $strongarm->value = '0';
  $export['devel_query_sort'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_raw_names';
  $strongarm->value = 0;
  $export['devel_raw_names'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_rebuild_theme_registry';
  $strongarm->value = 0;
  $export['devel_rebuild_theme_registry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_redirect_page';
  $strongarm->value = 0;
  $export['devel_redirect_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_use_uncompressed_jquery';
  $strongarm->value = 0;
  $export['devel_use_uncompressed_jquery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_xhprof_directory';
  $strongarm->value = '';
  $export['devel_xhprof_directory'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_xhprof_enabled';
  $strongarm->value = FALSE;
  $export['devel_xhprof_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_xhprof_url';
  $strongarm->value = '';
  $export['devel_xhprof_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dev_mem';
  $strongarm->value = 0;
  $export['dev_mem'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dev_timer';
  $strongarm->value = 0;
  $export['dev_timer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_http_request_fails';
  $strongarm->value = FALSE;
  $export['drupal_http_request_fails'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_private_key';
  $strongarm->value = '9Mgh5ZrXVKiPOhgZ-KAyyz5oJFqQNXo7fyyHSjhSO7Y';
  $export['drupal_private_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entitycache_enabled';
  $strongarm->value = TRUE;
  $export['entitycache_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'featrues_tools_disable_features_page_js';
  $strongarm->value = 0;
  $export['featrues_tools_disable_features_page_js'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_codecache';
  $strongarm->value = array(
    'pro_101_build_infrastructure' => array(
      'dependencies' => 'ade115dad6ed0368c4271eeb0042b1cd',
      'variable' => '4dbab155af7fb7f090995ecca5886827',
      'user_role' => 'a0a90752e327f8b93ed391d4253be2a7',
      'user_permission' => 'af039c18debc528a69e55b7337e9ff6e',
    ),
    'pro_101_core_infrastructure' => array(
      'dependencies' => 'e7d67bf4189c7bd00bbfc4f759cd8b21',
      'variable' => '5f34526e3b491c1d2c621855d4cf35d3',
      'field' => 'fcac911dc6f2b54ff5ca9767f90142ce',
      'menu_custom' => '1c2b00718ed476ad18590044d454433b',
      'user_permission' => '23e63f3b12e596f55f331f04c6d00a3a',
      'node' => 'ddea5e63c6bf342b96d7761ee7ab0f59',
      'views_view' => 'ac84de86a7682db2eefaf9a39170e6b1',
    ),
    'pro_101_user_infrastructure' => array(
      'dependencies' => 'bd13105dfd2a98a6f82944ad856efa19',
      'variable' => 'a5df5e7ba791b65a9e3197733f1b3792',
      'content_menu_links' => 'bbbe277b4d100764996109fa8ae43140',
      'field' => 'c8371e5b097c88930172979ca242e614',
      'user_permission' => 'dba7d1d3d32cd1ee26365b3b1a821b8f',
      'context' => '2f746af29c95e9bcd9cb676ff79badab',
      'mollom_form' => '30cc9b830e42cd713f6cfd5ca674624b',
      'field_group' => 'a7e541c07619e4cc43ea16fd9bea791b',
    ),
    'pro_101_authoring_infrastructure' => array(
      'dependencies' => '37e0d1a3c85703ee27d13802b8e680c4',
      'variable' => '9682e657466cbb6546da44bb67fcb3af',
      'ckeditor_profile' => '71254b73944b8de37191f23891dccae5',
      'filter' => 'd2d53737c07efc01b4a262cda9f6970d',
      'user_permission' => '173f716e2f862729f37e90544f4f4c01',
      'workbench_moderation_states' => '1456e370bbde7639e39d497ec291d572',
      'workbench_moderation_transitions' => '433a6ee7cc881e1c399890dcb66acece',
      'rules_config' => 'db5aa3982947a6cdecd26b5c55e6cb29',
      'mollom_form' => '598a1d7ba12c0290cbc1e98cfb759bca',
    ),
    'pro_101_media_infrastructure' => array(
      'dependencies' => '76d1a87999a92dbd6a439143ec75078a',
      'variable' => '4d2c8b5b70fd7ffc87e1eca2bb01416f',
      'user_permission' => '8a294e0c21869cdb56850a497ba43a5d',
      'image' => '9d63d895b833189a0a5e569b06d5d830',
    ),
    'pro_101_form_infrastructure' => array(
      'dependencies' => '023dddae66dd7e958e8ddadd36325774',
      'variable' => '5336c29f5b4ef2c36d5355af21454310',
      'field' => '30eaa33b57865b20eeaef7a58d38049d',
      'user_permission' => 'a3b788918acffd1249dc918e1ab631d9',
      'node' => '4993f56036a9255899650871783537c0',
    ),
    'pro_101_seo_infrastructure' => array(
      'dependencies' => '994c9ce5092723bc8855a54318eb4f1d',
      'variable' => 'ce471de10277fd2ea4926ef612aa6542',
      'user_permission' => '2d7d4a2a95827e2420de9830b4ad53b4',
    ),
    'pro_101_about_feature' => array(
      'dependencies' => 'f334ac27b969221f20f7aa53080cd124',
      'views_view' => '4a06a3f3e3503df9d9b60abd1ff82cc8',
    ),
    'pro_101_answers_feature' => array(
      'dependencies' => '9ee6fafeea85f23c34d042d1fdef436a',
      'variable' => '1040661fe17860deb0428e3cc9303a96',
      'field' => 'bfc06dfa48f27e109d794347ac399aaf',
      'taxonomy' => 'faadd5283932ea7eac378eaec64de3d5',
      'user_permission' => '508d681613df235bdda472aa6e281d28',
    ),
    'pro_101_blog_feature' => array(
      'dependencies' => '30c75ef6527cb28857f24fd47e3e46fb',
      'variable' => '68ec7d3cce505605e2da99f3e80cf72e',
      'field' => 'e8d2187733aebc3e6ae995a12ba048d4',
      'taxonomy' => '6326167e4ab36b3a2db01fea16819bff',
      'user_permission' => '4f50864a195dd8bc04baa12d4b1cd39c',
      'node' => '6dba0cc1c5af2a57bc90b9c7db03f925',
      'views_view' => 'c10b989642648fb44ec3011a8af4a7c3',
    ),
    'pro_101_glossary_feature' => array(
      'dependencies' => '4c64998214bd94dc0b4c22905d05dca5',
      'variable' => '5c7b619a33d775c5bf345bac4f6820e4',
      'content_menu_links' => '8e930eaa623585916fcfef452a165fc4',
      'taxonomy' => '52a4d7406294df738191f3cd3177fd4f',
      'user_permission' => '9ba786d4461b689c143ca413c56e04ae',
    ),
    'pro_101_showcase_feature' => array(
      'dependencies' => '9670c8af4458dbb1852d37bef206dc22',
      'variable' => '3b1baf6987d499349f86b36c8f619b25',
      'field' => '85398e38755514247d32cc2a77267a47',
      'user_permission' => '8517dc80be3e2f51d0d400914a95c528',
      'image' => '4f3d0d4f400988cb2550169063b4de34',
      'node' => 'fa4276fd2233e533b5ec78c1ff5b7191',
      'views_view' => '0d06a8cd6c5c449ee10f61cc660876df',
    ),
    'pro_101_page_feature' => array(
      'dependencies' => 'c93efc13265499311bbab96511c41a97',
      'variable' => 'e66162139961e4c3fa7d38d5725f404e',
      'field' => '419342f389de0e5c37f22d3f91440fc3',
      'user_permission' => '420b02670d6dd3c15a497a85279716f8',
      'node' => '0967447a3999c3dd3effe625128085d7',
    ),
    'pro_101_specialties_feature' => array(
      'dependencies' => '5f44ed02ceaf451b07b43f5aec1b1687',
      'variable' => '1413b60c60f1132d259b7946d0f24acd',
      'field' => 'a47a0a6258d6bdecc3fc4c3379238db3',
      'user_permission' => 'eb34f09fa61343a0b7b4308d3d2bb2b3',
      'node' => '8f8affae0aa14b7b2a4d97e71100d5e5',
      'views_view' => '5938f6233ea48e164c49a30d6905d932',
    ),
    'pro_101_testimonials_feature' => array(
      'dependencies' => '7de4ffa57b878bf1f51d4c21d7f9cf38',
      'variable' => 'b9156cd61698a142cd5603960d3f361e',
      'field' => '6b70439f9f25e5824062b51b428aab74',
      'user_permission' => 'f86f46dd26b32a6f6e3a98d40ae314e4',
      'rules_config' => '831ffee6ada45a19dba8619e42634cf6',
      'node' => '5b2109f4ed7e9140e3567d2992cbacb5',
      'views_view' => '1bcaa6b969b0f3b6f800be8af8c36208',
    ),
    'pro_101_default_theme' => array(
      'dependencies' => '1e9ff8aa506533a70c3facf999956e70',
      'variable' => '74aef2eefe459b741937868e200bb214',
      'user_permission' => '1d4fcd77c6cd477a678aff1d6cc30e97',
      'delta' => '038f4ef334f3263c13f124e3a920413e',
    ),
    'pro_101_contact_content' => array(
      'dependencies' => '2974a1275b2a7d5956e7a4f6b87c0fba',
      'variable' => '776dc551ebd8425fd6c25e3c67566a10',
      'content' => '4bf998be3a6461604d8f5be372e37365',
      'context' => 'feedac0a2e0a1453390cf52e1f38334d',
    ),
    'pro_101_home_content' => array(
      'dependencies' => 'a057afd03d4e4a767596f016f73ed6a9',
      'content' => '9b930453788e87182c9a2dfb099df677',
      'content_menu_links' => '3fbc474f52776e53893a28ea867507c5',
      'context' => 'cc0b8eefda8cd5b5f062d492ee083668',
    ),
    'pro_101_about_content' => array(
      'dependencies' => '7ccc3a052b86399841931fa5998c15a9',
      'content' => '4fa142eb123a1f3b257b472668619c5b',
      'context' => 'ba9429c84624db25846a63d1217f88ce',
    ),
    'pro_101_social_content' => array(
      'dependencies' => '17380e9d29bca241888db4e921bffbc6',
      'variable' => '04b5da655d635b0445a285a2141069c9',
      'content' => 'd86e83d975b32b40576637a8f888b4c0',
      'user_permission' => 'abe0cac75aaff13d00b7e2d3ad50f36d',
    ),
    'pro_101_answers_content' => array(
      'dependencies' => 'b3ac2ba2dabff5449ea43d018e0d6ee6',
      'content' => 'c65125a37a47564f611ee0e25749cbbf',
      'content_menu_links' => 'b649379bc619e6493e4b73392f831443',
      'context' => '96f0477d389668a93b53b74f3fcc4749',
    ),
    'pro_101_blog_content' => array(
      'dependencies' => '444ffdade56df545174087d914e30003',
      'content' => '1fd208f8e0c9dc608d8868bf9696ee27',
      'context' => 'f45b20925a53c3d51124c5e172b9fd24',
    ),
    'pro_101_specialties_content' => array(
      'dependencies' => 'b99cc583534a298102323651da169967',
      'content' => '8c3713cd203e7a2d0d5f56b4541617ea',
      'content_menu_links' => 'f070b5085da70c5f5bc915e6c3db44e3',
    ),
    'pro_101_privacy_policy_content' => array(
      'dependencies' => '28e525f46ffefa515aa360285b43c154',
      'content' => '4a9bbc7098ae2d642006102592ee4a63',
    ),
    'pro_101_testimonials_content' => array(
      'dependencies' => '0e7a378b661c0962667dd6c9af1611d3',
      'content' => '981d6c4e490ad31fac3f5491a07af655',
    ),
    'pro_101_global_content' => array(
      'dependencies' => 'f7fb51b9f610b1c5cd8f10cfc86fdc82',
      'content' => '2a22593f18477a7d3c2950a0b105aa1c',
      'context' => '37c0139f61134c405db61326adc056dc',
    ),
    'pro_101_support_mode' => array(
      'dependencies' => '3f6fa1e8b44170542b8fcb4bad030ff3',
      'variable' => 'a92b61bd9f088d108eb7558586730111',
      'user_permission' => '30cb619594f85ff490ba2d6941e96511',
      'context' => '0af50d96e4f7e16a437151f80614c484',
    ),
    'pro_101_development_mode' => array(
      'dependencies' => '8dcdce327507d961dec3ee47362b1db1',
      'variable' => 'fbc965b3227a0955bd5bbda3676d6155',
      'user_permission' => '7d5ff68bb4ee2384caa93429df345d7c',
    ),
    'pro_101_mock_user_accounts' => array(
      'dependencies' => 'e410ca96d90029817c7bb9c7cb1f7ea4',
    ),
    'pro_101_wrap' => array(
      'shortcut_set' => '3c06fcb175f720ab8c330616d29b728a',
      'dependencies' => '5b9296bcee5e64537cb05ae55fadfd8a',
      'variable' => '505e178e3d5900da9541b5672a664378',
      'ccl' => '566c0f7871a98c5b34cc10a137daa0a5',
      'menu_links' => 'a677223afcaa973e71f77a572c9bce91',
      'user_permission' => '41e4779a2ef79c1da6f20c644eb865af',
    ),
    'pro_101_ignore' => array(
      'dependencies' => 'e410ca96d90029817c7bb9c7cb1f7ea4',
      'variable' => '5fcf5bdd3a9772e41c25dc4422c3fadc',
    ),
  );
  $export['features_codecache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_ignored_orphans';
  $strongarm->value = array();
  $export['features_ignored_orphans'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_semaphore';
  $strongarm->value = array();
  $export['features_semaphore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_tools_disable_features_page_js';
  $strongarm->value = 0;
  $export['features_tools_disable_features_page_js'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_temporary_path';
  $strongarm->value = '/tmp';
  $export['file_temporary_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_fallback_format';
  $strongarm->value = 'plain_text';
  $export['filter_fallback_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ftools_disable_features_page_js';
  $strongarm->value = 0;
  $export['ftools_disable_features_page_js'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_profile';
  $strongarm->value = 'pro_101';
  $export['install_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_task';
  $strongarm->value = 'done';
  $export['install_task'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_time';
  $strongarm->value = 1356856623;
  $export['install_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locale_custom_disabled_strings_en';
  $strongarm->value = array(
    '' => array(
      'Your draft will be placed in moderation.' => 'When revision of this content is complete, change the editorial state to \'Ready for Optimization\'.',
    ),
  );
  $export['locale_custom_disabled_strings_en'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maintenance_mode';
  $strongarm->value = 0;
  $export['maintenance_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maintenance_mode_message';
  $strongarm->value = 'pro101a.platdev.info is currently under maintenance. We should be back shortly. Thank you for your patience.';
  $export['maintenance_mode_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'manualcrop_cache_control';
  $strongarm->value = TRUE;
  $export['manualcrop_cache_control'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_expanded';
  $strongarm->value = array();
  $export['menu_expanded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_masks';
  $strongarm->value = array(
    0 => 507,
    1 => 506,
    2 => 501,
    3 => 254,
    4 => 253,
    5 => 252,
    6 => 250,
    7 => 246,
    8 => 245,
    9 => 127,
    10 => 126,
    11 => 125,
    12 => 124,
    13 => 123,
    14 => 122,
    15 => 121,
    16 => 118,
    17 => 117,
    18 => 63,
    19 => 62,
    20 => 61,
    21 => 60,
    22 => 59,
    23 => 58,
    24 => 45,
    25 => 44,
    26 => 42,
    27 => 31,
    28 => 30,
    29 => 29,
    30 => 27,
    31 => 24,
    32 => 23,
    33 => 22,
    34 => 21,
    35 => 15,
    36 => 14,
    37 => 13,
    38 => 12,
    39 => 11,
    40 => 10,
    41 => 7,
    42 => 6,
    43 => 5,
    44 => 3,
    45 => 2,
    46 => 1,
  );
  $export['menu_masks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_schema_installed';
  $strongarm->value = TRUE;
  $export['metatag_schema_installed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeblock_block_20';
  $strongarm->value = array(
    'view_mode' => 'node_block_default',
    'node_link' => 'node_block_default',
  );
  $export['nodeblock_block_20'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeblock_block_21';
  $strongarm->value = array(
    'view_mode' => 'node_block_default',
    'node_link' => 'node_block_default',
  );
  $export['nodeblock_block_21'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeblock_block_22';
  $strongarm->value = array(
    'view_mode' => 'node_block_default',
    'node_link' => 'node_block_default',
  );
  $export['nodeblock_block_22'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeblock_block_6';
  $strongarm->value = array(
    'view_mode' => 'node_block_default',
    'node_link' => 'node_block_default',
  );
  $export['nodeblock_block_6'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeblock_block_7';
  $strongarm->value = array(
    'view_mode' => 'node_block_default',
    'node_link' => 'node_block_default',
  );
  $export['nodeblock_block_7'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'path_alias_whitelist';
  $strongarm->value = array(
    'faq-page' => TRUE,
    'node' => TRUE,
    'taxonomy' => TRUE,
    'user' => TRUE,
  );
  $export['path_alias_whitelist'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'preprocess_css';
  $strongarm->value = 0;
  $export['preprocess_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'preprocess_js';
  $strongarm->value = 0;
  $export['preprocess_js'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rules_empty_sets';
  $strongarm->value = array(
    'workbench_moderation_after_unpublishing_live_content' => 0,
    'node_update' => 1,
    'node_presave' => 2,
    'node_view' => 3,
    'node_delete' => 4,
    'init' => 5,
    'cron' => 6,
    'watchdog' => 7,
    'user_update' => 8,
    'user_presave' => 9,
    'user_view' => 10,
    'user_delete' => 11,
    'user_login' => 12,
    'user_logout' => 13,
    'taxonomy_term_insert' => 14,
    'taxonomy_term_update' => 15,
    'taxonomy_term_presave' => 16,
    'taxonomy_term_delete' => 17,
    'taxonomy_vocabulary_insert' => 18,
    'taxonomy_vocabulary_update' => 19,
    'taxonomy_vocabulary_presave' => 20,
    'taxonomy_vocabulary_delete' => 21,
  );
  $export['rules_empty_sets'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_publisherID';
  $strongarm->value = 'dr-86b2a3b1-2327-1cc8-13b0-88b371f646a0';
  $export['sharethis_publisherID'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'node';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'development@pearance.com';
  $export['site_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'pro101a.platdev.info';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_slogan';
  $strongarm->value = '';
  $export['site_slogan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'prostarter';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_extensions_default';
  $strongarm->value = ' csv';
  $export['upload_extensions_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_block_hashes';
  $strongarm->value = array(
    '6a599607ca67a5ace7ef0de5f78c06ed' => 'Professionals-about_author_block',
    '9cf22433e0efbd8b206c8e4c2edb177c' => 'workbench_recent_content-block_1',
  );
  $export['views_block_hashes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wordstream_password';
  $strongarm->value = '';
  $export['wordstream_password'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wordstream_username';
  $strongarm->value = '';
  $export['wordstream_username'] = $strongarm;

  return $export;
}
