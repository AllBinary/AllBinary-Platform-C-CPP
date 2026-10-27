
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
        



        #ifndef ORG_ALLBINARY_TIME_TIMEDELAYHELPER_CPP
        #define ORG_ALLBINARY_TIME_TIMEDELAYHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/time/TimeDelayHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/System.h"
        
            #include "java/lang/Long.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

TimeDelayHelper::TimeDelayHelper(int32_t delay) : elapsedTimeAtPause(Long.MIN_VALUE){
this->delay= delay;
    
this->setStartTimeTNT();
    
}


    auto TimeDelayHelper::isTimeTNT() -> bool{

    int64_t currentTime = System.currentTimeMillis();;
    

                        if(currentTime -this->startTime > this->delay)
                        
                                    {
                                    this->startTime= currentTime;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto TimeDelayHelper::isTimeSinceTNT(int32_t delay) -> bool{

    int64_t currentTime = System.currentTimeMillis();;
    

                        if(currentTime -this->startTime > delay)
                        
                                    {
                                    this->startTime= currentTime;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto TimeDelayHelper::isTime(int64_t currentTime) -> bool{

                        if(currentTime -this->startTime > this->delay)
                        
                                    {
                                    this->startTime= currentTime;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto TimeDelayHelper::isTimeWithoutReset(int64_t currentTime) -> bool{

                        if(currentTime -this->startTime > this->delay)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto TimeDelayHelper::isTimeSince(int32_t delay, int64_t currentTime) -> bool{

                        if(currentTime -this->startTime > this->delay)
                        
                                    {
                                    this->startTime= currentTime;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto TimeDelayHelper::getElapsedTNT() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return System.currentTimeMillis() -this->startTime;
    
}


    auto TimeDelayHelper::getElapsed(int64_t currentTime) -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return currentTime -this->startTime;
    
}


    auto TimeDelayHelper::isElapsed(int64_t currentTime, int64_t time) -> bool{

                        if(this->getElapsed(currentTime) > time)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    auto TimeDelayHelper::isElapsedTNT(int64_t time) -> bool{

                        if(this->getElapsedTNT() > time)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    auto TimeDelayHelper::setStartTime(int64_t startTime) -> void{
this->startTime= startTime;
    
}


    auto TimeDelayHelper::getStartTime() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->startTime;
    
}


    auto TimeDelayHelper::setStartTimeTNT() -> void{
this->startTime= System.currentTimeMillis();
    
}


    auto TimeDelayHelper::pause() -> void{
this->elapsedTimeAtPause= this->getElapsedTNT();
    
this->startTime= Long.MAX_VALUE;
    
}


    auto TimeDelayHelper::resume() -> bool{

                        if(this->elapsedTimeAtPause != Long.MIN_VALUE)
                        
                                    {
                                    this->startTime= System.currentTimeMillis() +this->elapsedTimeAtPause;
    
this->elapsedTimeAtPause= Long.MIN_VALUE;
    
this->setStartTimeTNT();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto TimeDelayHelper::toStringAt(int64_t currentTime) -> std::string{

    int64_t elapsed = this->getElapsed(currentTime);;
    

                        if(elapsed > 0)
                        
                                    {
                                    
    CommonLabels* commonLabels = CommonLabels::getInstance();;
    

    std::string elapsedAsString = std::to_string(elapsed);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (new StringMaker())->append(commonLabels->START)->appendlong(this->startTime)->append(commonLabels->CURRENT)->appendlong(currentTime)->append(commonLabels->ELAPSED)->append(elapsedAsString)->toString();;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance()->EMPTY_STRING;
    

                        }
                            
}


    auto TimeDelayHelper::toString() -> std::string{

    int64_t currentTime = System.currentTimeMillis();;
    

    int64_t elapsed = this->getElapsed(currentTime);;
    

                        if(elapsed > 0)
                        
                                    {
                                    
    CommonLabels* commonLabels = CommonLabels::getInstance();;
    

    std::string elapsedAsString = std::to_string(elapsed);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (new StringMaker())->append(commonLabels->START)->appendlong(this->startTime)->append(commonLabels->CURRENT)->appendlong(currentTime)->append(commonLabels->ELAPSED)->append(elapsedAsString)->toString();;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance()->EMPTY_STRING;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_TIME_TIMEDELAYHELPER_CPP
