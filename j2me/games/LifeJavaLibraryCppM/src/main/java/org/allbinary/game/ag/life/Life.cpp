
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/RuntimeException.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LifeInterface.h"

class Life
            : public Object
        : public LifeInterface {

    public: static Life createLife(){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Life(0, 0);
    

                //: 
} catch(e) 
            {



                            throw RuntimeException();
                    
}

}


    public: static const Life NO_LIFE = Life::createLife();

    private: int16_t lives;

    private: int16_t startLives;

    private: int16_t maxlives;

public: Life(int16_t lives, int16_t maxlives){
this->maxlives= maxlives;
    

                        if(lives > this->maxlives)
                        
                                    {
                                    


                            throw Exception("To Many Lives");
                    

                                    }
                                
this->lives= lives;
    
this->startLives= lives;
    
}


    public: int16_t get(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->lives;
    
}


    public: void set(int16_t lives){
this->lives= lives;
    
}


    public: void reset(){
this->lives= this->startLives;
    
}


    public: void add(int16_t lives){

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


    public: bool isAlive(){

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


    public: int16_t getMaxlives(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->maxlives;
    
}


    private: bool reachedLimit(){

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


    public: void deaths(int16_t lives){

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


    public: int16_t getStartLives(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->startLives;
    
}


    public: void setStartLives(int16_t startLives){
this->startLives= startLives;
    
}


};

            

