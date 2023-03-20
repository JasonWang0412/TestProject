using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InheritTest_CSharp
{
	public class Parent
	{
		public Parent()
		{
			Console.WriteLine( "Parent.Start" );
			DoSomething();
			Console.WriteLine( "Parent.StarEndt" );
		}

		public virtual void DoSomething()
		{
			Console.WriteLine( "Parent.Do" );
		}
	}

	public class Child : Parent
	{
		private string foo;

		public Child()
		{
			Console.WriteLine( "Child.Start" );
			foo = "123";
			DoSomething();
			Console.WriteLine( "Child.StarEndt" );
		}

		public override void DoSomething()
		{
			Console.WriteLine( "Child.Do" );
			Console.WriteLine( this.foo );
		}
	}
	class Program
	{
		static void Main( string[] args )
		{
			Child c = new Child();
			Console.ReadKey();
		}
	}
}
