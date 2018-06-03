#include <eosiolib/eosio.hpp>
using namespace eosio;

class helloWorld : public eosio::contract {
  public:
      using contract::contract;

      /// @abi action 
      void hi( account_name user ) {
         print( "Hello World! Blockhain Rocks!!!, ", name{user} );
      }
};

EOSIO_ABI( helloWorld, (hi) )
