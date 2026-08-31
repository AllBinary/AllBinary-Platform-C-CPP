
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
        



            #include "../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/init/db/UserDbInitInfo.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InitSql.h"
#include "InitInfo.h"

class InitInfoEntity: public InitSql {
        

    private: const NAME: string = "InitInfoEntity";

    private: const NOTHING: string = "NOTHING";

    private: const tableName: string = "initdata";

    private: const tableData: string;

    private: const NOT_IN_DB: string = "Not In DB";

    private: const METHOD_GET: string = "get()";

    private: const METHOD_IS: string = "is()";

    private: const METHOD_ADD: string = "add()";

    private: const CREATED_SUCCESS: string = " Created Successfully";

    private: const FAILED_TO_CREATE: string = "Failed to create ";

public constructor (){
            super(new UserDbInitInfo());
                    

                            //For kotlin this is before the body of the constructor.
                    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.sqlStrings!.CREATE_TABLE);
    
stringBuffer!.append(this.tableName);
    
stringBuffer!.append(this.sqlStrings!.START);
    
stringBuffer!.append(this.NOTHING);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(InitInfo.getInstance()!.TESTING);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(InitInfo.getInstance()!.TESTHTMLPATH);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(InitInfo.getInstance()!.MAINPATH);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(this.sqlStrings!.PRIMARY_KEY);
    
stringBuffer!.append(this.NOTHING);
    
stringBuffer!.append(this.sqlStrings!.END);
    
this.tableData= stringBuffer!.toString();
    
this.setTable(this.tableName);
    
}


    public bool get(){

        try {
            
    keyAndValue: HashMap<any, any> = new HashMap<any, any>();;
    
keyAndValue!.put(this.NOTHING, this.NOTHING);
    

    hashMap: HashMap<any, any> = getRow(keyAndValue)!;;
    

                        if(hashMap != 
                                    null
                                )
                        
                                    {
                                    InitInfo.getInstance()!.set(hashMap);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            
                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.PRELOADER))
                        
                                    {
                                    PreLogUtil.put(this.NOT_IN_DB, NAME, this.METHOD_GET);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            

                //: 
} catch(e) 
            {

                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.PRELOADERERROR))
                        
                                    {
                                    PreLogUtil.putOE(this.commonStrings!.EXCEPTION, this.NAME, this.METHOD_GET, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    public bool is(){

        try {
            
    keyAndValue: HashMap<any, any> = new HashMap<any, any>();;
    
keyAndValue!.put(this.NOTHING, this.NOTHING);
    

    hashMap: HashMap<any, any> = getRow(keyAndValue)!;;
    

                        if(hashMap != 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            
                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.PRELOADER))
                        
                                    {
                                    PreLogUtil.put(this.NOT_IN_DB, this.NAME, this.METHOD_IS);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            

                //: 
} catch(e) 
            {

                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.PRELOADERERROR))
                        
                                    {
                                    PreLogUtil.putOE(this.commonStrings!.EXCEPTION, this.NAME, this.METHOD_IS, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    public update(){
updateWhere(NOTHING, NOTHING, InitInfo.getInstance()!.toHashMap());
    
}


    public add(){

        try {
            
    values: Vector = new Vector();;
    
values.add(this.NOTHING);
    
values.add(InitInfo.getInstance()!.getTesting());
    
values.add(InitInfo.getInstance()!.getTestHtmlPath());
    
values.add(InitInfo.getInstance()!.getMainPath());
    
insert(values);
    

                //: 
} catch(e) 
            {

                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.PRELOADERERROR))
                        
                                    {
                                    PreLogUtil.putOE(this.commonStrings!.EXCEPTION, this.NAME, this.METHOD_ADD, e);
    

                                    }
                                
}

}


    public string createTable(){

                        if(super.createTable(this.tableData))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.tableName +this.CREATED_SUCCESS;
    

                                    }
                                
                        else {
                            
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.FAILED_TO_CREATE);
    
stringBuffer!.append(this.tableData);
    
stringBuffer!.append(AbPathData.getInstance()!.EXTENSION_SEP);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    

                        }
                            
}


};

            

