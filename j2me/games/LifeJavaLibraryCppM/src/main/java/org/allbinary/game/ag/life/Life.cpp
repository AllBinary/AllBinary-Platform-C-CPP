
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
        

    public static Life createLife(){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Life(0, 0);
    

                //: 
} catch(e) 
            {



                            throw new RuntimeException();
                    
}

}


    public static const NO_LIFE: Life = Life.createLife()!;

    private: lives: int16_t;

    private: startLives: int16_t;

    private: maxlives: int16_t;

public constructor (int16_t lives, int16_t maxlives){

            super();
        this.maxlives= maxlives;
    

                        if(lives > this.maxlives)
                        
                                    {
                                    


                            throw new Exception("To Many Lives");
                    

                                    }
                                
this.lives= lives;
    
this.startLives= lives;
    
}


    public int16_t get(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.lives;
    
}


    public set(int16_t lives){
this.lives= lives;
    
}


    public reset(){
this.lives= this.startLives;
    
}


    public add(int16_t lives){

                        if(!this.reachedLimit())
                        
                                    {
                                    
                        if(this.lives +lives <= this.getMaxlives())
                        
                                    {
                                    this.lives= (this.lives +lives);
    

                                    }
                                
                        else {
                            this.lives= this.getMaxlives();
    

                        }
                            

                                    }
                                
}


    public bool isAlive(){

                        if(this.lives <= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                        }
                            
}


    public int16_t getMaxlives(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.maxlives;
    
}


    bool reachedLimit(){

                        if(this.lives > this.maxlives || this.lives < 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public deaths(int16_t lives){

                        if(!this.reachedLimit())
                        
                                    {
                                    
                        if(this.lives -lives >= 0)
                        
                                    {
                                    this.lives= (this.lives -lives);
    

                                    }
                                
                        else {
                            this.lives= 0;
    

                        }
                            

                                    }
                                
}


    public int16_t getStartLives(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.startLives;
    
}


    public setStartLives(int16_t startLives){
this.startLives= startLives;
    
}


};

            

