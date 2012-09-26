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
  $strongarm->name = 'block_cache';
  $strongarm->value = 0;
  $export['block_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache';
  $strongarm->value = 1348618323;
  $export['cache_flush_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_block';
  $strongarm->value = 1348618323;
  $export['cache_flush_cache_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_entity_file';
  $strongarm->value = 1348618323;
  $export['cache_flush_cache_entity_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_entity_node';
  $strongarm->value = 1348618323;
  $export['cache_flush_cache_entity_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_entity_taxonomy_term';
  $strongarm->value = 1348618323;
  $export['cache_flush_cache_entity_taxonomy_term'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_entity_taxonomy_vocabulary';
  $strongarm->value = 1348618323;
  $export['cache_flush_cache_entity_taxonomy_vocabulary'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_entity_user';
  $strongarm->value = 1348618323;
  $export['cache_flush_cache_entity_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_field';
  $strongarm->value = 1348618323;
  $export['cache_flush_cache_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_filter';
  $strongarm->value = 1348618323;
  $export['cache_flush_cache_filter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_form';
  $strongarm->value = 1348618323;
  $export['cache_flush_cache_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_image';
  $strongarm->value = 1348618323;
  $export['cache_flush_cache_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_menu';
  $strongarm->value = 1348618323;
  $export['cache_flush_cache_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_metatag';
  $strongarm->value = 1348618323;
  $export['cache_flush_cache_metatag'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_page';
  $strongarm->value = 1348618323;
  $export['cache_flush_cache_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_path';
  $strongarm->value = 1348618323;
  $export['cache_flush_cache_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_rules';
  $strongarm->value = 1348618323;
  $export['cache_flush_cache_rules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_token';
  $strongarm->value = 1348618323;
  $export['cache_flush_cache_token'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_views';
  $strongarm->value = 1348618323;
  $export['cache_flush_cache_views'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_views_data';
  $strongarm->value = 1348618323;
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
  $strongarm->value = '6EuPGwObZ8x98Jy5Z7vy145CdD5AdkK1Y2fqlT6Gh7I';
  $export['cron_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_last';
  $strongarm->value = 1348618323;
  $export['cron_last'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'css_js_query_string';
  $strongarm->value = 'maxpnq';
  $export['css_js_query_string'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ctools_last_cron';
  $strongarm->value = 1348618463;
  $export['ctools_last_cron'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'defaultcontent_hashes';
  $strongarm->value = array(
    0 => 'e77e67271cd3688488bd5f9755aad517',
    1 => 'c9913f8dd14c8ae691a6e8af2041b724',
    2 => '2f1132b273088c7cdfa59405fcc7ed25',
    3 => '2420208fbbca067a92c14df236ed2a2d',
    4 => '214251c488b398afe676bce8681f68b5',
    5 => 'cbc27b914f14682e75b804ef7d618e84',
    6 => 'e6634816792080267aba2336dc29d2da',
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
  $strongarm->value = '8Le5BfiW_2KBdN9zUrl0maNdE3l9_DsGJ7yYh9n_7V8';
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
      'variable' => 'e670143ff842a99940703177066819fa',
      'user_role' => 'a0a90752e327f8b93ed391d4253be2a7',
      'user_permission' => 'af039c18debc528a69e55b7337e9ff6e',
    ),
    'pro_101_core_infrastructure' => array(
      'dependencies' => '496293baa40760c7a517fb69b1d5f387',
      'variable' => '8c68ed2dab7b57261c371ba7fe4a4ede',
      'field' => 'fcac911dc6f2b54ff5ca9767f90142ce',
      'menu_custom' => '1c2b00718ed476ad18590044d454433b',
      'user_permission' => 'd48fd31ad14817fdeef0e913437e135e',
      'node' => 'ddea5e63c6bf342b96d7761ee7ab0f59',
      'views_view' => 'ac84de86a7682db2eefaf9a39170e6b1',
    ),
    'pro_101_user_infrastructure' => array(
      'dependencies' => '370d74c71f722c48093f6c8fa667790d',
      'variable' => '938058b470833217ebef0e35657898ea',
      'content_menu_links' => '366b2d3dc3f6a120404ea6bcd5353719',
      'field' => 'c8371e5b097c88930172979ca242e614',
      'user_permission' => '86a968f41478ffde0082ad26a03d57d6',
      'context' => '2f746af29c95e9bcd9cb676ff79badab',
      'field_group' => '3f27761bcd0e7e47e8db1d080ca6df6e',
    ),
    'pro_101_authoring_infrastructure' => array(
      'dependencies' => '6d6572917c75e5b6507cd1a3d5e10484',
      'variable' => '8bfc0d7afe3fccf593eec7bb7ed0719e',
      'ckeditor_profile' => '5f81d16ff513f3442ca9aa19f6a66147',
      'filter' => 'd5fa6d0d118986cd8c51f61ae07a23fd',
      'user_permission' => 'eccd130c6b84aad89fdcb5ce60d9229f',
      'workbench_moderation_states' => 'f4bc25478cc9f28dd1a6c20121990d5f',
      'workbench_moderation_transitions' => '017a24e20ba7a36c4b46cd96a2b8bf71',
      'rules_config' => 'f6922630bac00008cf574c1a68bace22',
      'mollom_form' => '598a1d7ba12c0290cbc1e98cfb759bca',
    ),
    'pro_101_media_infrastructure' => array(
      'dependencies' => '00a9c41f42af3e3d14d9fd91bf6f7da1',
      'variable' => '9ebbdfcb71c0a86f9eb7d4811fff0d1f',
      'user_permission' => 'ccd50e4d3a558dcf3914750876abe165',
    ),
    'pro_101_form_infrastructure' => array(
      'dependencies' => '0404c254e5fea207b6fb45c482ef4782',
      'variable' => '25af36b531faaff85b79c9ae7b93e2ed',
      'field' => '8fbe6c62178d064d1b0475dd24e9beac',
      'user_permission' => 'de46fe1a15306f2c22a5ef4b8596f92d',
      'node' => '4993f56036a9255899650871783537c0',
    ),
    'pro_101_seo_infrastructure' => array(
      'dependencies' => '03d374de6570de9def2d4953b83366f5',
      'variable' => 'c3abef55b2b6105f558f70952f36528c',
      'user_permission' => '2d7d4a2a95827e2420de9830b4ad53b4',
      'metatag_config' => '2b7b1e1544ce5205990ac83bc218b0bd',
    ),
    'pro_101_about_feature' => array(
      'dependencies' => 'f334ac27b969221f20f7aa53080cd124',
      'views_view' => 'f812e0447ebf4266157752a885ecf955',
    ),
    'pro_101_answers_feature' => array(
      'dependencies' => '661965b500a22f52851e30a341df46dc',
      'variable' => 'db3a85bbd427d55e2788c01b6dad7930',
      'field' => 'bfc06dfa48f27e109d794347ac399aaf',
      'taxonomy' => 'faadd5283932ea7eac378eaec64de3d5',
      'user_permission' => '44053bdd6f43a2188f712f7b21b81356',
    ),
    'pro_101_blog_feature' => array(
      'dependencies' => 'b9daf99f06340b909b37408cbf260e45',
      'variable' => '3eaf28adcd9a7299bbbdc9a2065e04d8',
      'field' => 'f6328b3704d77f359ad2deb6aae10289',
      'taxonomy' => '6326167e4ab36b3a2db01fea16819bff',
      'user_permission' => '28e413f280815db8454e8df19817d9e3',
      'node' => '6dba0cc1c5af2a57bc90b9c7db03f925',
      'views_view' => '21170ce561a34d67f3f062971dff90d7',
    ),
    'pro_101_glossary_feature' => array(
      'dependencies' => '4c64998214bd94dc0b4c22905d05dca5',
      'variable' => '5c7b619a33d775c5bf345bac4f6820e4',
      'content_menu_links' => '8e930eaa623585916fcfef452a165fc4',
      'taxonomy' => '52a4d7406294df738191f3cd3177fd4f',
      'user_permission' => '9ba786d4461b689c143ca413c56e04ae',
    ),
    'pro_101_showcase_feature' => array(
      'dependencies' => '1f21c861cae82eef23c64aba696a3bb7',
      'variable' => '0255a8df39a85f06f7459d40eef9649e',
      'field' => '096017b6679fb713b9206da65f79bd47',
      'user_permission' => '0f4eec369dbd893751c693a56dae3854',
      'image' => '4f3d0d4f400988cb2550169063b4de34',
      'node' => 'fa4276fd2233e533b5ec78c1ff5b7191',
      'views_view' => '0d06a8cd6c5c449ee10f61cc660876df',
    ),
    'pro_101_page_feature' => array(
      'dependencies' => 'bdb006d8f978cbea47988f22f5f8f898',
      'variable' => '665146d28d6770d3fc325c9aee09cd4b',
      'field' => '419342f389de0e5c37f22d3f91440fc3',
      'user_permission' => '2064c8c162bbeb155bcd815af5c455d5',
      'node' => '0967447a3999c3dd3effe625128085d7',
    ),
    'pro_101_specialties_feature' => array(
      'dependencies' => '3fd57e84bbefce54aa0a51208e182b91',
      'variable' => 'c6d95d3f7ada1e481052ac8e9636d607',
      'field' => '7636509f670bcf943c3a0c917518628e',
      'user_permission' => '88d0bbcfc3208afda74a570178147d24',
      'node' => '8f8affae0aa14b7b2a4d97e71100d5e5',
      'views_view' => '5938f6233ea48e164c49a30d6905d932',
    ),
    'pro_101_testimonials_feature' => array(
      'dependencies' => 'ccd0621455fc392b7fc99586ac74bd26',
      'variable' => '8d922cd93acb2a270c48e434207421f4',
      'field' => 'bc23a6dd39435d75e6e45844331d2a44',
      'user_permission' => 'fb2022a890dbd11d40377f80af55d190',
      'rules_config' => 'abb76bdd9f50b7184a1bebe70c310ee7',
      'node' => '07da996d0db903ad2a6694bbffd6ee28',
      'views_view' => '544f438e2f55d63246827c7c5901208b',
    ),
    'pro_101_default_theme' => array(
      'dependencies' => '1e9ff8aa506533a70c3facf999956e70',
      'variable' => '128b2d3591a118d983f5e33fadfb9065',
      'user_permission' => '1d4fcd77c6cd477a678aff1d6cc30e97',
      'delta' => '40aff3d9f62feb978cef1e252e3a84a9',
    ),
    'pro_101_contact_content' => array(
      'dependencies' => '2974a1275b2a7d5956e7a4f6b87c0fba',
      'variable' => '776dc551ebd8425fd6c25e3c67566a10',
      'content' => '1f59285edecad0a7333f4b27e0965f69',
      'context' => 'feedac0a2e0a1453390cf52e1f38334d',
    ),
    'pro_101_home_content' => array(
      'dependencies' => 'a057afd03d4e4a767596f016f73ed6a9',
      'content' => 'dad8f9ea2a1f9a38a7897597c1cacba1',
      'content_menu_links' => '3fbc474f52776e53893a28ea867507c5',
      'context' => '5c5adb80fda0d2bc7c40f2ef5ff1602c',
    ),
    'pro_101_about_content' => array(
      'dependencies' => '7ccc3a052b86399841931fa5998c15a9',
      'content' => '4fa142eb123a1f3b257b472668619c5b',
      'context' => '6a030e94125e17723ccc34cde868c8d8',
    ),
    'pro_101_social_content' => array(
      'dependencies' => '17380e9d29bca241888db4e921bffbc6',
      'variable' => '805e112f8de2557caaccab689f0ff976',
      'content' => '0f766541c141b3dfe2096562409e8f57',
      'user_permission' => 'abe0cac75aaff13d00b7e2d3ad50f36d',
    ),
    'pro_101_answers_content' => array(
      'dependencies' => 'b3ac2ba2dabff5449ea43d018e0d6ee6',
      'content' => 'c65125a37a47564f611ee0e25749cbbf',
      'content_menu_links' => 'b649379bc619e6493e4b73392f831443',
      'context' => 'd05a4072149af499c736e217d73b612d',
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
      'content' => '71ba996531faa0070d12f21ff83d5aed',
      'content_menu_links' => '523afcac3c5365236cc9f662bbc9de8b',
    ),
    'pro_101_testimonials_content' => array(
      'dependencies' => '0e7a378b661c0962667dd6c9af1611d3',
      'content' => '12afa7f1886a3770f7c1f4838f93fb86',
    ),
    'pro_101_global_content' => array(
      'dependencies' => 'f7fb51b9f610b1c5cd8f10cfc86fdc82',
      'content' => 'fc7da43c20250293383828678339d20f',
      'context' => 'ff85529272c9de0c9b431cf3f1e22af7',
    ),
    'pro_101_support_mode' => array(
      'dependencies' => '93ac3e273d016a8ea9a3b9b07345b19d',
      'variable' => '263f19de6c5d9f4fca18c8405cdd140f',
      'user_permission' => 'ae43116b55812627f85f9428d9e7c7dc',
      'context' => 'bd0c309c47ab7b01f9e27a1fc828e835',
    ),
    'pro_101_development_mode' => array(
      'dependencies' => 'fc54fabbac8296a7734338295dc645b0',
      'variable' => '0f68166b5c8c866d3ac35333f18f6356',
      'user_permission' => '06b8c3f1b0e846ed1091e1a0a30d34e0',
    ),
    'pro_101_mock_user_accounts' => array(
      'dependencies' => 'e410ca96d90029817c7bb9c7cb1f7ea4',
    ),
    'pro_101_wrap' => array(
      'shortcut_set' => '3c06fcb175f720ab8c330616d29b728a',
      'dependencies' => '5b9296bcee5e64537cb05ae55fadfd8a',
      'variable' => '2c5fc4c543cc80ca2d3d2a693348a88d',
      'ccl' => '566c0f7871a98c5b34cc10a137daa0a5',
      'menu_links' => 'a677223afcaa973e71f77a572c9bce91',
      'user_permission' => '8fe489d2ad1a4a86c856d709836b08ea',
    ),
    'pro_101_ignore' => array(
      'dependencies' => 'e410ca96d90029817c7bb9c7cb1f7ea4',
      'variable' => '2e4d770ae8ad8202360d420e48421b33',
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
  $strongarm->value = 1348618323;
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
    7 => 245,
    8 => 127,
    9 => 126,
    10 => 125,
    11 => 124,
    12 => 123,
    13 => 122,
    14 => 121,
    15 => 117,
    16 => 63,
    17 => 62,
    18 => 61,
    19 => 60,
    20 => 59,
    21 => 58,
    22 => 45,
    23 => 44,
    24 => 42,
    25 => 31,
    26 => 30,
    27 => 29,
    28 => 27,
    29 => 24,
    30 => 23,
    31 => 22,
    32 => 21,
    33 => 15,
    34 => 14,
    35 => 13,
    36 => 12,
    37 => 11,
    38 => 10,
    39 => 7,
    40 => 6,
    41 => 5,
    42 => 3,
    43 => 2,
    44 => 1,
  );
  $export['menu_masks'] = $strongarm;

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
    'init' => 4,
    'cron' => 5,
    'watchdog' => 6,
    'user_update' => 7,
    'user_presave' => 8,
    'user_view' => 9,
    'user_delete' => 10,
    'user_login' => 11,
    'user_logout' => 12,
    'taxonomy_term_insert' => 13,
    'taxonomy_term_update' => 14,
    'taxonomy_term_presave' => 15,
    'taxonomy_term_delete' => 16,
    'taxonomy_vocabulary_insert' => 17,
    'taxonomy_vocabulary_update' => 18,
    'taxonomy_vocabulary_presave' => 19,
    'taxonomy_vocabulary_delete' => 20,
  );
  $export['rules_empty_sets'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_publisherID';
  $strongarm->value = 'dr-2c93455-d434-ac98-55f8-5af0113d5ad6';
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
  $strongarm->value = 'pro101b.platdev.info';
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
