
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
        



            #include <vector>
        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/math/PrimitiveLongSingleton.h>

      
#include <org/allbinary/logic/math/PrimitiveLongUtil.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelper.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Timer
            : public Object
         {

    private: int64_t startTime =  -1;

    private: int64_t hundredthTime= 0;

    private: int64_t maxTime;

    private: int64_t modifier= 0;

    private: std::vector<char> hundrethsString = PrimitiveLongSingleton::getInstance().ZERO;

    private: int32_t totalDigits = 1;

    private: PrimitiveLongUtil primitiveLongUtil;

    private: const std::vector<char> MAX = ['L','O','L'];

    private: const GameTickTimeDelayHelper gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory::getInstance();

public: Timer(int32_t maxTime){
this->primitiveLongUtil= PrimitiveLongUtil::createPowerOfTen(maxTime);
    
this->maxTime= maxTime;
    
}


    public: void start(){
this->hundredthTime= 0;
    
this->startTime= this->gameTickTimeDelayHelper.startTime;
    
}


    public: int64_t get(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hundredthTime;
    
}


    public: void update(){

    int64_t lastLowerTime = this->hundredthTime;;
    

    int64_t currentTime = ((this->modifier +this->gameTickTimeDelayHelper.startTime) -this->startTime);;
    

                        if(currentTime < 0)
                        
                                    {
                                    currentTime= 0;
    

                                    }
                                
this->hundredthTime= currentTime /100;
    

                        if(this->hundredthTime >= this->maxTime)
                        
                                    {
                                    
                        if(this->startTime > 0)
                        
                                    {
                                    this->hundrethsString= this->MAX;
    

                                    }
                                

                                    }
                                
                             else 
                        if(lastLowerTime != this->hundredthTime)
                        
                                    {
                                    this->hundrethsString= this->primitiveLongUtil.getCharArray(static_cast<int32_t>(this->hundredthTime));
    
this->totalDigits= this->primitiveLongUtil.getCurrentTotalDigits();
    

                                    }
                                
}


    public: void reduce(int32_t value){
this->modifier -= value;
    
}


    public: void add(int32_t value){
this->modifier += value;
    
}


    public: std::vector<char> getTimeChars(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hundrethsString;
    
}


    public: int32_t getCurrentTotalDigits(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->totalDigits;
    
}


};

            

