<?php
/**
 * Error title callback
 */
function _wvu_login_error_title($code) {
  switch ($code) {
    case '403':
      return t('Access denied');
    break;
    case '404':
      return t('Page not found');
    break;
  }
}
/**
 * Error page callback
 */
function _wvu_login_error_page($code) {
  //$lmsless_classes = _cis_lmsless_get_distro_classes(elmsln_core_get_profile_key());
  //drupal_add_js(drupal_get_path('module', 'elmsln_core') . '/js/elmsln-core-error-messages.js', array('weight' => 10000, 'scope' => 'footer'));
  //$output = '<div class="row center">
  //<div class="s12 col"><img src="' . base_path() . drupal_get_path('module', 'elmsln_core') . '/js/hal9000.png" class="error-page-hal9000" /></div>';
  //$output .= '<div class="s12 col elmsln-error-page error-' . $code . ' ' . $lmsless_classes['text'] . '">--------<br/>';
  $output = '';

  switch ($code) {
    case '403':
      $output .= 'Access denied, please <a href="cas">log into your account</a>.';
    break;
    case '404':
      $output .= t('Sorry, page not found.');
    break;
  }
  $output .= '<br/>-----------</div></div>';
  return $output;
}

