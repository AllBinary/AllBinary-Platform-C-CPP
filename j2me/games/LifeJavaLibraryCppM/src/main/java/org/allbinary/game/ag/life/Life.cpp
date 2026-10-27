
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_AG_LIFE_LIFE_CPP
        #define ORG_ALLBINARY_GAME_AG_LIFE_LIFE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/life/Life.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/ag/life/LifeInterface.h"


    auto Life::createLife() -> Life*{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Life(0, 0);
    

                //: 
} catch(Exception& e) 
            {



                            throw RuntimeException();
                    
}

}

Life* Life::NO_LIFE = Life::createLife();

Life::Life(int16_t lives, int16_t maxlives){
this->maxlives= maxlives;
    

                        if(lives > this->maxlives)
                        
                                    {
                                    


                            throw Exception("To Many Lives");
                    

                                    }
                                
this->lives= lives;
    
this->startLives= lives;
    
}


    auto Life::get() -> int16_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->lives;
    
}


    auto Life::set(int16_t lives) -> void{
this->lives= lives;
    
}


    auto Life::reset() -> void{
this->lives= this->startLives;
    
}


    auto Life::add(int16_t lives) -> void{

                        if(!this->reachedLimit())
                        
                                    {
                                    
                        if(this->lives +lives <= this->getMaxlives())
                        
                                    {
                                    this->lives= (this->lives +lives);
    

                                    }
                                
                        else {
                            this->lives= this->getMaxlives();
    

                        }
                            

                                    }
                                
}


    auto Life::isAlive() -> bool{

                        if(this->lives <= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                        }
                            
}


    auto Life::getMaxlives() -> int16_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->maxlives;
    
}


    auto Life::reachedLimit() -> bool{

                        if(this->lives > this->maxlives || this->lives < 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    auto Life::deaths(int16_t lives) -> void{

                        if(!this->reachedLimit())
                        
                                    {
                                    
                        if(this->lives -lives >= 0)
                        
                                    {
                                    this->lives= (this->lives -lives);
    

                                    }
                                
                        else {
                            this->lives= 0;
    

                        }
                            

                                    }
                                
}


    auto Life::getStartLives() -> int16_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->startLives;
    
}


    auto Life::setStartLives(int16_t startLives) -> void{
this->startLives= startLives;
    
}




        #endif //ORG_ALLBINARY_GAME_AG_LIFE_LIFE_CPP
