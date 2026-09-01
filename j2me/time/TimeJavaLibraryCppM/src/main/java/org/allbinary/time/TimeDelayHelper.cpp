
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
        



            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/System.h"
        
            #include "../../../java/lang/Long.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TimeDelayHelper
            : public Object
         {

    private: int64_t startTime =  -1;

    private: int64_t elapsedTimeAtPause = Long::MIN_VALUE;

    public: int32_t delay;

public: TimeDelayHelper(int32_t delay){
this->delay= delay;
    
this->setStartTimeTNT();
    
}


    public: bool isTimeTNT(){

    int64_t currentTime = Date.now();;
    

                        if(currentTime -this->startTime > this->delay)
                        
                                    {
                                    this->startTime= currentTime;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: bool isTimeSinceTNT(int32_t delay){

    int64_t currentTime = Date.now();;
    

                        if(currentTime -this->startTime > delay)
                        
                                    {
                                    this->startTime= currentTime;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: bool isTime(int64_t currentTime){

                        if(currentTime -this->startTime > this->delay)
                        
                                    {
                                    this->startTime= currentTime;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: bool isTimeWithoutReset(int64_t currentTime){

                        if(currentTime -this->startTime > this->delay)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: bool isTimeSince(int32_t delay, int64_t currentTime){

                        if(currentTime -this->startTime > this->delay)
                        
                                    {
                                    this->startTime= currentTime;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: int64_t getElapsedTNT(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Date.now() -this->startTime;
    
}


    public: int64_t getElapsed(int64_t currentTime){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return currentTime -this->startTime;
    
}


    public: bool isElapsed(int64_t currentTime, int64_t time){

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


    public: bool isElapsedTNT(int64_t time){

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


    public: void setStartTime(int64_t startTime){
this->startTime= startTime;
    
}


    public: int64_t getStartTime(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->startTime;
    
}


    public: void setStartTimeTNT(){
this->startTime= Date.now();
    
}


    public: void pause(){
this->elapsedTimeAtPause= this->getElapsedTNT();
    
this->startTime= Long::MAX_VALUE;
    
}


    public: bool resume(){

                        if(this->elapsedTimeAtPause != Long::MIN_VALUE)
                        
                                    {
                                    this->startTime= Date.now() +this->elapsedTimeAtPause;
    
this->elapsedTimeAtPause= Long::MIN_VALUE;
    
this->setStartTimeTNT();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: std::string toStringAt(int64_t currentTime){

    int64_t elapsed = this->getElapsed(currentTime);;
    

                        if(elapsed > 0)
                        
                                    {
                                    
    CommonLabels commonLabels = CommonLabels::getInstance();;
    

    std::string elapsedAsString = std::to_string(elapsed);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringMaker().append(commonLabels.START).appendlong(this->startTime).append(commonLabels.CURRENT).appendlong(currentTime).append(commonLabels.ELAPSED).append(elapsedAsString).toString();;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance().EMPTY_STRING;
    

                        }
                            
}


    public: std::string toString(){

    int64_t currentTime = Date.now();;
    

    int64_t elapsed = this->getElapsed(currentTime);;
    

                        if(elapsed > 0)
                        
                                    {
                                    
    CommonLabels commonLabels = CommonLabels::getInstance();;
    

    std::string elapsedAsString = std::to_string(elapsed);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringMaker().append(commonLabels.START).appendlong(this->startTime).append(commonLabels.CURRENT).appendlong(currentTime).append(commonLabels.ELAPSED).append(elapsedAsString).toString();;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance().EMPTY_STRING;
    

                        }
                            
}


};

            

