<?php declare(strict_types=1);
namespace Plentymarkets22\Providers;

use Plenty\Plugin\ServiceProvider;

/**
 * Class HelloWorldServiceProvider
 * @package HelloWorld\Providers
 */
class Plentymarkets22ServiceProvider extends ServiceProvider
{

	/**
	 * Register the service provider.
	 */
	public function register()
	{
		$this->getApplication()->register(Plentymarkets22RouteServiceProvider::class);
	}
}
