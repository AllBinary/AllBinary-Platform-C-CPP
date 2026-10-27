
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/quoterequest/QuoteRequestData.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/data/generator/QuoteRequestIdGenerator.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class QuoteRequest
            : public Object
         {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: std::string id;

    private: std::string userName;

    private: std::string projectInfo;

    private: std::string userComments;

    private: std::string budget;

    private: std::string timeFrame;

    private: std::string comments;

public: QuoteRequest(std::string userName, HttpServletRequest* request){

    QuoteRequestData* quoteRequestData = QuoteRequestData::getInstance();;
    
this->id= (new QuoteRequestIdGenerator())->getNext();
    
this->setUserName(userName);
    
this->setProjectInfo(request->getParameter(quoteRequestData->PROJECT_INFO));
    
this->setUserComments(request->getParameter(quoteRequestData->CUSTOMER_COMMENTS));
    
this->setBudget(request->getParameter(quoteRequestData->BUDGET));
    
this->setTimeFrame(request->getParameter(quoteRequestData->TIMEFRAME));
    
this->setComments(request->getParameter(quoteRequestData->COMMENTS));
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->TAGHELPER))
                        
                                    {
                                    this->logUtil->putF("Created with: " +this->toHashMap(), this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
}


public: QuoteRequest(HashMap<Object*, Object*>* hashMap){

    QuoteRequestData* quoteRequestData = QuoteRequestData::getInstance();;
    
this->id= hashMap->get(quoteRequestData->ID);
    
this->setUserName(hashMap->get(UserData::USERNAME));
    
this->setProjectInfo(hashMap->get(quoteRequestData->PROJECT_INFO));
    
this->setUserComments(hashMap->get(quoteRequestData->CUSTOMER_COMMENTS));
    
this->setBudget(hashMap->get(quoteRequestData->BUDGET));
    
this->setTimeFrame(hashMap->get(quoteRequestData->TIMEFRAME));
    
this->setComments(hashMap->get(quoteRequestData->COMMENTS));
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->TAGHELPER))
                        
                                    {
                                    this->logUtil->putF("Created with: " +this->toHashMap(), this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
}


    public: bool isValid(){

        try {
            
    bool valid = Boolean::TRUE;;
    

                        if(false || userName.size() < 4 || userName.size() > 250)
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(false || projectInfo.size() < 0 || projectInfo.size() > AbSqlData::MAXBLOB)
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(false || userComments.size() < 0 || userComments.size() > AbSqlData::MAXBLOB)
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(false || budget.size() < 0 || budget.size() > AbSqlData::MAXBLOB)
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(false || timeFrame.size() < 0 || timeFrame.size() > AbSqlData::MAXBLOB)
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(false || comments.size() < 0 || comments.size() > AbSqlData::MAXBLOB)
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return valid;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put("Failed to validate form", this, this->commonStrings->IS_VALID, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}

}


    public: std::string validationInfo(){

        try {
            
    StringMaker* stringBuffer = new StringMaker();;
    

                        if(false || userName.size() < 4 || userName.size() > 250)
                        
                                    {
                                    stringBuffer->append("Please enter a User Name with more than 4 characters.<br>");
    

                                    }
                                

                        if(false || projectInfo.size() < 0 || projectInfo.size() > AbSqlData::MAXBLOB)
                        
                                    {
                                    stringBuffer->append("Please enter Project Info with less than " +AbSqlData::MAXBLOB +" characters.<br>");
    

                                    }
                                

                        if(false || userComments.size() < 0 || userComments.size() > AbSqlData::MAXBLOB)
                        
                                    {
                                    stringBuffer->append("Please enter User Comments with less than " +AbSqlData::MAXBLOB +" characters.<br>");
    

                                    }
                                

                        if(false || budget.size() < 0 || budget.size() > AbSqlData::MAXBLOB)
                        
                                    {
                                    stringBuffer->append("Please enter Budget with less than " +AbSqlData::MAXBLOB +" characters.<br>");
    

                                    }
                                

                        if(false || timeFrame.size() < 0 || timeFrame.size() > AbSqlData::MAXBLOB)
                        
                                    {
                                    stringBuffer->append("Please enter time frame with less than " +AbSqlData::MAXBLOB +" characters.<br>");
    

                                    }
                                

                        if(false || comments.size() < 0 || comments.size() > AbSqlData::MAXBLOB)
                        
                                    {
                                    stringBuffer->append("Please enter comments with less than " +AbSqlData::MAXBLOB +" characters.<br>");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put("Failed to generate validation error info", this, "validationInfo()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Error Validating Form";
    
}

}


    public: BasicArrayList* toVector(){

    BasicArrayList* values = new BasicArrayListD();;
    
values->add(this->id);
    
values->add(this->userName);
    
values->add(this->projectInfo);
    
values->add(this->userComments);
    
values->add(this->budget);
    
values->add(this->timeFrame);
    
values->add(this->comments);
    

    Calendar* calendar = Calendar::getInstance();;
    

    std::string time = (int64_t(calendar->getTimeInMillis())).toString();;
    
values->add(time);
    
values->add(time);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return values;
    
}


    public: HashMap<Object*, Object*>* toHashMap(){

    QuoteRequestData* quoteRequestData = QuoteRequestData::getInstance();;
    

    HashMap<Object*, Object*>* values = StdUtil::getInstance()->createHashMap();;
    
values->put(UserData::USERNAME, userName);
    
values->put(quoteRequestData->PROJECT_INFO, this->projectInfo);
    
values->put(quoteRequestData->CUSTOMER_COMMENTS, this->userComments);
    
values->put(quoteRequestData->BUDGET, this->budget);
    
values->put(quoteRequestData->TIMEFRAME, this->timeFrame);
    
values->put(quoteRequestData->COMMENTS, this->comments);
    

    Calendar* calendar = Calendar::getInstance();;
    

    std::string time = (int64_t(calendar->getTimeInMillis())).toString();;
    
values->put(EntryData::getInstance()->LASTMODIFIED, time);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return values;
    
}


    public: void setUserName(std::string value){
this->userName= value;
    
}


    public: void setProjectInfo(std::string value){
this->projectInfo= value;
    
}


    public: void setUserComments(std::string value){
this->userComments= value;
    
}


    public: void setBudget(std::string value){
this->budget= value;
    
}


    public: void setTimeFrame(std::string value){
this->timeFrame= value;
    
}


    public: void setComments(std::string value){
this->comments= value;
    

    StringUtil* stringUtil = StringUtil::getInstance();;
    

                        if(false)
                        this->comments= stringUtil->EMPTY_STRING;
                                
}


    public: std::string getUserName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->userName;
    
}


    public: std::string getProjectInfo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->projectInfo;
    
}


    public: std::string getUserComments(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->userComments;
    
}


    public: std::string getBudget(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->budget;
    
}


    public: std::string getTimeFrame(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->timeFrame;
    
}


    public: std::string getComments(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->comments;
    
}


};

            

