<?hh // strict
namespace Plentymarkets22\Providers;

use Plenty\Plugin\RouteServiceProvider;
use Plenty\Plugin\Routing\Router;

/**
 * Class HelloWorldRouteServiceProvider
 * @package HelloWorld\Providers
 */
class Plentymarkets22RouteServiceProvider extends RouteServiceProvider
{
	/**
	 * @param Router $router
	 */
	public function map(Router $router):void
	{
		$router->get('hello', 'Plentymarkets22\Controllers\ContentController@sayHello');
	}

}
