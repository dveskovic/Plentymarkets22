<?hh //strict

namespace Plentymarkets22\Controllers;

use Plenty\Plugin\Controller;
use Plenty\Plugin\Templates\Twig;

/**
 * Class ContentController
 * @package HelloWorld\Controllers
 */
class ContentController extends Controller
{
	/**
	 * @param Twig $twig
	 * @return string
	 */
	public function sayHello(Twig $twig):string
	{
		return $twig->render('Plentymarkets22::content.hello');
	}
}
