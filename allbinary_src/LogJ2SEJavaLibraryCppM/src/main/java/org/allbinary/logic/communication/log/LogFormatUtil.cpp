
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
        
            #include "../../../../../java/lang/Throwable.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/java/exception/ExceptionUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/time/TimeStampUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //ActualPlatform
/*actual*/ class LogFormatUtil
            : public Object
         {
        

    private: static const instance: LogFormatUtil = new LogFormatUtil();

    /*actual*/ public static LogFormatUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LogFormatUtil.instance;
    
}


    private: const timeStampUtil: TimeStampUtil = TimeStampUtil.getInstance()!;

    private: const commonSeps: CommonSeps = CommonSeps.getInstance()!;

    private: const NONE: string = "None";

    private: const LOG_ERROR: string = "\nLog-Error: ";

    private: const EMPTY: string = "Empty";

    private: const STACK_TRACE: string = "\nStack Trace: ";

    private: const TIME: string = "Time: ";

    private: const CLASS_NAME: string = this.commonSeps!.SPACE;

    private: const FUNCTION_CALL: string = CommonLabels.getInstance()!.COLON_SEP;

    private: const SPECIAL_MESSAGE: string = "> ";

private constructor (){

            super();
        }


    /*actual*/ public string get(string className, string functionName, string specialMessage, any = {} exception){

    stringBuffer: StringMaker = this.getF(className, functionName)!;;
    
stringBuffer!.append(this.getO(exception));
    
stringBuffer!.append(this.SPECIAL_MESSAGE);
    
stringBuffer!.append(specialMessage);
    
stringBuffer!.append(this.commonSeps!.NEW_LINE);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    /*actual*/ public string getS(string className, string functionName, string specialMessage){

    stringBuffer: StringMaker = this.getF(className, functionName)!;;
    
stringBuffer!.append(this.SPECIAL_MESSAGE);
    
stringBuffer!.append(specialMessage);
    
stringBuffer!.append(this.commonSeps!.NEW_LINE);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    StringMaker getF(string className, string functionName){

                        if(functionName == 
                                    null
                                )
                        
                                    {
                                    functionName= this.NONE;
    

                                    }
                                

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.TIME);
    
stringBuffer!.append(this.timeStampUtil!.getAsString());
    
stringBuffer!.append(this.CLASS_NAME);
    
stringBuffer!.append(className);
    
stringBuffer!.append(this.FUNCTION_CALL);
    
stringBuffer!.append(functionName);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer;
    
}


    private: const stringUtil: StringUtil = StringUtil.getInstance()!;

    private: const exceptionUtil: ExceptionUtil = ExceptionUtil.getInstance()!;

    private: const nullUtil: NullUtil = NullUtil.getInstance()!;

    /*actual*/ public string getO(any = {} exception){

                        if(exception != this.nullUtil!.NULL_OBJECT)
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.LOG_ERROR);
    

    exceptionAsString: string = exception.toString()!;;
    

                        if(exceptionAsString != 
                                    null
                                )
                        
                                    {
                                    stringBuffer!.append(exceptionAsString);
    

                                    }
                                
                        else {
                            stringBuffer!.append(this.EMPTY);
    

                        }
                            
stringBuffer!.append(this.STACK_TRACE);
    

                        if(exception != this.nullUtil!.NULL_OBJECT)
                        
                                    {
                                    stringBuffer!.append(this.exceptionUtil!.getStackTrace(exception as Throwable));
    

                                    }
                                
                        else {
                            stringBuffer!.append(this.stringUtil!.NULL_STRING);
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil.getInstance()!.EMPTY_STRING;
    

                        }
                            
}


};

            

