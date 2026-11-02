
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_QUOTEREQUEST_QUOTEREQUEST_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_QUOTEREQUEST_QUOTEREQUEST_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/quoterequest/QuoteRequest.h"
        

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
        

QuoteRequest::QuoteRequest(std::string userName, HttpServletRequest* request) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){

    QuoteRequestData* quoteRequestData = QuoteRequestData::getInstance();;
    
this->id= (new QuoteRequestIdGenerator())->getNext();
    
this->setUserName(userName);
    
this->setProjectInfo(JavaBoxes::unbox<std::string>(request->getParameter(quoteRequestData->PROJECT_INFO)));
    
this->setUserComments(JavaBoxes::unbox<std::string>(request->getParameter(quoteRequestData->CUSTOMER_COMMENTS)));
    
this->setBudget(JavaBoxes::unbox<std::string>(request->getParameter(quoteRequestData->BUDGET)));
    
this->setTimeFrame(JavaBoxes::unbox<std::string>(request->getParameter(quoteRequestData->TIMEFRAME)));
    
this->setComments(JavaBoxes::unbox<std::string>(request->getParameter(quoteRequestData->COMMENTS)));
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPER))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Created with: ") +JavaString::valueOf(this->toHashMap()), this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
}


QuoteRequest::QuoteRequest(HashMap<Object*, Object*>* hashMap) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){

    QuoteRequestData* quoteRequestData = QuoteRequestData::getInstance();;
    
this->id= JavaBoxes::unbox<std::string>(hashMap->get(quoteRequestData->ID));
    
this->setUserName(JavaBoxes::unbox<std::string>(hashMap->get(UserData::USERNAME)));
    
this->setProjectInfo(JavaBoxes::unbox<std::string>(hashMap->get(quoteRequestData->PROJECT_INFO)));
    
this->setUserComments(JavaBoxes::unbox<std::string>(hashMap->get(quoteRequestData->CUSTOMER_COMMENTS)));
    
this->setBudget(JavaBoxes::unbox<std::string>(hashMap->get(quoteRequestData->BUDGET)));
    
this->setTimeFrame(JavaBoxes::unbox<std::string>(hashMap->get(quoteRequestData->TIMEFRAME)));
    
this->setComments(JavaBoxes::unbox<std::string>(hashMap->get(quoteRequestData->COMMENTS)));
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPER))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Created with: ") +JavaString::valueOf(this->toHashMap()), this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
}


    auto QuoteRequest::isValid() -> bool{

        try {
            
    bool valid = Boolean::TRUE;;
    

                        if(false || this->userName.size() < 4 || this->userName.size() > 250)
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(false || this->projectInfo.size() < 0 || this->projectInfo.size() > AbSqlData::MAXBLOB)
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(false || this->userComments.size() < 0 || this->userComments.size() > AbSqlData::MAXBLOB)
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(false || this->budget.size() < 0 || this->budget.size() > AbSqlData::MAXBLOB)
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(false || this->timeFrame.size() < 0 || this->timeFrame.size() > AbSqlData::MAXBLOB)
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(false || this->comments.size() < 0 || this->comments.size() > AbSqlData::MAXBLOB)
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return valid;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put("Failed to validate form", this, this->commonStrings->IS_VALID, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}

}


    auto QuoteRequest::validationInfo() -> std::string{

        try {
            
    StringMaker* stringBuffer = new StringMaker();;
    

                        if(false || this->userName.size() < 4 || this->userName.size() > 250)
                        
                                    {
                                    stringBuffer->append("Please enter a User Name with more than 4 characters.<br>");
    

                                    }
                                

                        if(false || this->projectInfo.size() < 0 || this->projectInfo.size() > AbSqlData::MAXBLOB)
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Please enter Project Info with less than ") +JavaString::valueOf(AbSqlData::MAXBLOB)) +JavaString::valueOf(" characters.<br>"));
    

                                    }
                                

                        if(false || this->userComments.size() < 0 || this->userComments.size() > AbSqlData::MAXBLOB)
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Please enter User Comments with less than ") +JavaString::valueOf(AbSqlData::MAXBLOB)) +JavaString::valueOf(" characters.<br>"));
    

                                    }
                                

                        if(false || this->budget.size() < 0 || this->budget.size() > AbSqlData::MAXBLOB)
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Please enter Budget with less than ") +JavaString::valueOf(AbSqlData::MAXBLOB)) +JavaString::valueOf(" characters.<br>"));
    

                                    }
                                

                        if(false || this->timeFrame.size() < 0 || this->timeFrame.size() > AbSqlData::MAXBLOB)
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Please enter time frame with less than ") +JavaString::valueOf(AbSqlData::MAXBLOB)) +JavaString::valueOf(" characters.<br>"));
    

                                    }
                                

                        if(false || this->comments.size() < 0 || this->comments.size() > AbSqlData::MAXBLOB)
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Please enter comments with less than ") +JavaString::valueOf(AbSqlData::MAXBLOB)) +JavaString::valueOf(" characters.<br>"));
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put("Failed to generate validation error info", this, "validationInfo()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Error Validating Form";
    
}

}


    auto QuoteRequest::toVector() -> BasicArrayList*{

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


    auto QuoteRequest::toHashMap() -> HashMap<Object*, Object*>*{

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


    auto QuoteRequest::setUserName(std::string value) -> void{
this->userName= value;
    
}


    auto QuoteRequest::setProjectInfo(std::string value) -> void{
this->projectInfo= value;
    
}


    auto QuoteRequest::setUserComments(std::string value) -> void{
this->userComments= value;
    
}


    auto QuoteRequest::setBudget(std::string value) -> void{
this->budget= value;
    
}


    auto QuoteRequest::setTimeFrame(std::string value) -> void{
this->timeFrame= value;
    
}


    auto QuoteRequest::setComments(std::string value) -> void{
this->comments= value;
    

    StringUtil* stringUtil = StringUtil::getInstance();;
    

                        if(false)
                        this->comments= stringUtil->EMPTY_STRING;
                                
}


    auto QuoteRequest::getUserName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->userName;
    
}


    auto QuoteRequest::getProjectInfo() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->projectInfo;
    
}


    auto QuoteRequest::getUserComments() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->userComments;
    
}


    auto QuoteRequest::getBudget() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->budget;
    
}


    auto QuoteRequest::getTimeFrame() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->timeFrame;
    
}


    auto QuoteRequest::getComments() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->comments;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_QUOTEREQUEST_QUOTEREQUEST_CPP
