
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
        



            #include "../../../../../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/math/PrimitiveLongSingleton.h>

      
#include <org/allbinary/logic/math/PrimitiveLongUtil.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelper.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Timer
            : public Object
         {
        

    private: startTime: int64_t =  -1;

    private: hundredthTime: int64_t= 0;

    private: maxTime: int64_t;

    private: modifier: int64_t= 0;

    private: hundrethsString: std::vector<char> = PrimitiveLongSingleton.getInstance()!.ZERO;

    private: totalDigits: int32_t = 1;

    private: primitiveLongUtil: PrimitiveLongUtil;

    private: const MAX: std::vector<char> = ['L','O','L'];

    private: const gameTickTimeDelayHelper: GameTickTimeDelayHelper = GameTickTimeDelayHelperFactory.getInstance()!;

public constructor (int32_t maxTime){

            super();
        this.primitiveLongUtil= PrimitiveLongUtil.createPowerOfTen(maxTime);
    
this.maxTime= maxTime;
    
}


    public start(){
this.hundredthTime= 0;
    
this.startTime= this.gameTickTimeDelayHelper!.startTime;
    
}


    public int64_t get(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.hundredthTime;
    
}


    public update(){

    lastLowerTime: int64_t = this.hundredthTime;;
    

    currentTime: int64_t = ((this.modifier +this.gameTickTimeDelayHelper!.startTime) -this.startTime);;
    

                        if(currentTime < 0)
                        
                                    {
                                    currentTime= 0;
    

                                    }
                                
this.hundredthTime= currentTime /100;
    

                        if(this.hundredthTime >= this.maxTime)
                        
                                    {
                                    
                        if(this.startTime > 0)
                        
                                    {
                                    this.hundrethsString= this.MAX;
    

                                    }
                                

                                    }
                                
                             else 
                        if(lastLowerTime != this.hundredthTime)
                        
                                    {
                                    this.hundrethsString= this.primitiveLongUtil!.getCharArray(static_cast<int32_t>(this.hundredthTime));
    
this.totalDigits= this.primitiveLongUtil!.getCurrentTotalDigits();
    

                                    }
                                
}


    public reduce(int32_t value){
this.modifier -= value;
    
}


    public add(int32_t value){
this.modifier += value;
    
}


    public std::vector<char> getTimeChars(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.hundrethsString;
    
}


    public int32_t getCurrentTotalDigits(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.totalDigits;
    
}


};

            

