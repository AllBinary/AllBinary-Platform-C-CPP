
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
        
            #include "../../../../../java/lang/Long.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/quoterequest/QuoteRequestData.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/data/generator/QuoteRequestIdGenerator.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class QuoteRequest
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: id: string;

    private: userName: string;

    private: projectInfo: string;

    private: userComments: string;

    private: budget: string;

    private: timeFrame: string;

    private: comments: string;

public constructor (string userName, HttpServletRequest request){

            super();
        
    quoteRequestData: QuoteRequestData = QuoteRequestData.getInstance()!;;
    
this.id= new QuoteRequestIdGenerator().getNext();
    
this.setUserName(userName);
    
this.setProjectInfo(request.getParameter(quoteRequestData!.PROJECT_INFO) as string);
    
this.setUserComments(request.getParameter(quoteRequestData!.CUSTOMER_COMMENTS) as string);
    
this.setBudget(request.getParameter(quoteRequestData!.BUDGET) as string);
    
this.setTimeFrame(request.getParameter(quoteRequestData!.TIMEFRAME) as string);
    
this.setComments(request.getParameter(quoteRequestData!.COMMENTS) as string);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.TAGHELPER))
                        
                                    {
                                    this.logUtil!.putF("Created with: " +this.toHashMap(), this, this.commonStrings!.CONSTRUCTOR);
    

                                    }
                                
}


public constructor (HashMap<any, any> hashMap){

            super();
        
    quoteRequestData: QuoteRequestData = QuoteRequestData.getInstance()!;;
    
this.id= hashMap!.get(quoteRequestData!.ID) as string;
    
this.setUserName(hashMap!.get(UserData.USERNAME) as string);
    
this.setProjectInfo(hashMap!.get(quoteRequestData!.PROJECT_INFO) as string);
    
this.setUserComments(hashMap!.get(quoteRequestData!.CUSTOMER_COMMENTS) as string);
    
this.setBudget(hashMap!.get(quoteRequestData!.BUDGET) as string);
    
this.setTimeFrame(hashMap!.get(quoteRequestData!.TIMEFRAME) as string);
    
this.setComments(hashMap!.get(quoteRequestData!.COMMENTS) as string);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.TAGHELPER))
                        
                                    {
                                    this.logUtil!.putF("Created with: " +this.toHashMap(), this, this.commonStrings!.CONSTRUCTOR);
    

                                    }
                                
}


    public Boolean isValid(){

        try {
            
    valid: Boolean = Boolean.TRUE;;
    

                        if(this.userName == 
                                    null
                                 || this.userName!.length < 4 || this.userName!.length > 250)
                        
                                    {
                                    valid= Boolean.FALSE;
    

                                    }
                                

                        if(this.projectInfo == 
                                    null
                                 || this.projectInfo!.length < 0 || this.projectInfo!.length > AbSqlData.MAXBLOB)
                        
                                    {
                                    valid= Boolean.FALSE;
    

                                    }
                                

                        if(this.userComments == 
                                    null
                                 || this.userComments!.length < 0 || this.userComments!.length > AbSqlData.MAXBLOB)
                        
                                    {
                                    valid= Boolean.FALSE;
    

                                    }
                                

                        if(this.budget == 
                                    null
                                 || this.budget.length < 0 || this.budget.length > AbSqlData.MAXBLOB)
                        
                                    {
                                    valid= Boolean.FALSE;
    

                                    }
                                

                        if(this.timeFrame == 
                                    null
                                 || this.timeFrame!.length < 0 || this.timeFrame!.length > AbSqlData.MAXBLOB)
                        
                                    {
                                    valid= Boolean.FALSE;
    

                                    }
                                

                        if(this.comments == 
                                    null
                                 || this.comments.length < 0 || this.comments.length > AbSqlData.MAXBLOB)
                        
                                    {
                                    valid= Boolean.FALSE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return valid;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put("Failed to validate form", this, this.commonStrings!.IS_VALID, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    
}

}


    public string validationInfo(){

        try {
            
    stringBuffer: StringMaker = new StringMaker();;
    

                        if(this.userName == 
                                    null
                                 || this.userName!.length < 4 || this.userName!.length > 250)
                        
                                    {
                                    stringBuffer!.append("Please enter a User Name with more than 4 characters.<br>");
    

                                    }
                                

                        if(this.projectInfo == 
                                    null
                                 || this.projectInfo!.length < 0 || this.projectInfo!.length > AbSqlData.MAXBLOB)
                        
                                    {
                                    stringBuffer!.append("Please enter Project Info with less than " +AbSqlData.MAXBLOB +" characters.<br>");
    

                                    }
                                

                        if(this.userComments == 
                                    null
                                 || this.userComments!.length < 0 || this.userComments!.length > AbSqlData.MAXBLOB)
                        
                                    {
                                    stringBuffer!.append("Please enter User Comments with less than " +AbSqlData.MAXBLOB +" characters.<br>");
    

                                    }
                                

                        if(this.budget == 
                                    null
                                 || this.budget.length < 0 || this.budget.length > AbSqlData.MAXBLOB)
                        
                                    {
                                    stringBuffer!.append("Please enter Budget with less than " +AbSqlData.MAXBLOB +" characters.<br>");
    

                                    }
                                

                        if(this.timeFrame == 
                                    null
                                 || this.timeFrame!.length < 0 || this.timeFrame!.length > AbSqlData.MAXBLOB)
                        
                                    {
                                    stringBuffer!.append("Please enter time frame with less than " +AbSqlData.MAXBLOB +" characters.<br>");
    

                                    }
                                

                        if(this.comments == 
                                    null
                                 || this.comments.length < 0 || this.comments.length > AbSqlData.MAXBLOB)
                        
                                    {
                                    stringBuffer!.append("Please enter comments with less than " +AbSqlData.MAXBLOB +" characters.<br>");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put("Failed to generate validation error info", this, "validationInfo()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Error Validating Form";
    
}

}


    public Vector toVector(){

    values: Vector = new Vector();;
    
values.add(this.id);
    
values.add(this.userName);
    
values.add(this.projectInfo);
    
values.add(this.userComments);
    
values.add(this.budget);
    
values.add(this.timeFrame);
    
values.add(this.comments);
    

    calendar: Calendar = Calendar.getInstance()!;;
    

    time: string = new Long(calendar.getTimeInMillis()).toString();;
    
values.add(time);
    
values.add(time);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return values;
    
}


    public HashMap<any, any> toHashMap(){

    quoteRequestData: QuoteRequestData = QuoteRequestData.getInstance()!;;
    

    values: HashMap<any, any> = new HashMap<any, any>();;
    
values.put(UserData.USERNAME, userName);
    
values.put(quoteRequestData!.PROJECT_INFO, this.projectInfo);
    
values.put(quoteRequestData!.CUSTOMER_COMMENTS, this.userComments);
    
values.put(quoteRequestData!.BUDGET, this.budget);
    
values.put(quoteRequestData!.TIMEFRAME, this.timeFrame);
    
values.put(quoteRequestData!.COMMENTS, this.comments);
    

    calendar: Calendar = Calendar.getInstance()!;;
    

    time: string = new Long(calendar.getTimeInMillis()).toString();;
    
values.put(EntryData.getInstance()!.LASTMODIFIED, time);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return values;
    
}


    public setUserName(string value){
this.userName= value;
    
}


    public setProjectInfo(string value){
this.projectInfo= value;
    
}


    public setUserComments(string value){
this.userComments= value;
    
}


    public setBudget(string value){
this.budget= value;
    
}


    public setTimeFrame(string value){
this.timeFrame= value;
    
}


    public setComments(string value){
this.comments= value;
    

    stringUtil: StringUtil = StringUtil.getInstance()!;;
    

                        if(this.comments == 
                                    null
                                )
                        this.comments= stringUtil!.EMPTY_STRING
}


    public string getUserName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.userName;
    
}


    public string getProjectInfo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.projectInfo;
    
}


    public string getUserComments(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.userComments;
    
}


    public string getBudget(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.budget;
    
}


    public string getTimeFrame(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.timeFrame;
    
}


    public string getComments(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.comments;
    
}


};

            

