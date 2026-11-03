
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_BASICGAMEINFOFACTORY_CPP
        #define ORG_ALLBINARY_GAME_BASICGAMEINFOFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/BasicGameInfoFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto BasicGameInfoFactory::SINGLETON_owner() -> BasicGameInfoFactory* { static std::unique_ptr<BasicGameInfoFactory> value(new BasicGameInfoFactory()); return value.get(); }
BasicGameInfoFactory* BasicGameInfoFactory::SINGLETON = BasicGameInfoFactory::SINGLETON_owner();

    auto BasicGameInfoFactory::getInstance() -> BasicGameInfoFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return BasicGameInfoFactory::SINGLETON;
    
}


BasicGameInfoFactory::BasicGameInfoFactory(){
}


    auto BasicGameInfoFactory::init(int32_t total) -> void{
this->currentReleaseIndex= 0;
    
this->currentDestroyIndex= 0;
    
this->total= total;
    
}


    auto BasicGameInfoFactory::isPeaked() -> bool{

                        if(this->currentDestroyIndex >= this->total)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                        }
                            
}


    auto BasicGameInfoFactory::howManyLeft() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->total -this->currentDestroyIndex;
    
}




        #endif //ORG_ALLBINARY_GAME_BASICGAMEINFOFACTORY_CPP
