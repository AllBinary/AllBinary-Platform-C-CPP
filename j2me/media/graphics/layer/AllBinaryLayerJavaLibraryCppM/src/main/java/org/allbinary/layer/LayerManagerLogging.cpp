
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
        



            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/Integer.h"
        
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LayerManagerLoggingBase.h"
#include "AllBinaryLayer.h"
#include "LayerManager.h"

class LayerManagerLogging: public LayerManagerLoggingBase {
        

    private: static const instance: LayerManagerLogging = new LayerManagerLogging();

    public static LayerManagerLogging getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LayerManagerLogging.instance;
    
}


    private: static removeFailed: bool = false;

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const stringBuilder: StringMaker = new StringMaker();

    private: const APPEND: string = "append";

    private: const APPEND_: string = " append: ";

    private: const _AT_: string = " at: ";

    private: const ATTEMPT_REMOVE_: string = " Remove Attempt: ";

    private: const REMOVE_: string = " Remove: ";

    private: const REMOVE: string = "remove";

    private: const DID_NOT_REMOVE: string = " Did not remove: ";

    private: const CLEAR: string = " Clear List";

                //@Throws(Exception.constructor)
            
    public append(AllBinaryLayer layerInterface){
this.stringBuilder!.delete(0, this.stringBuilder!.length());
    
this.logUtil!.putF(this.stringBuilder!.appendint(TsUtil.getInstance()!.hashCode(this))!.append(this.APPEND_)!.append(layerInterface!.getName())!.toString(), this, this.APPEND);
    
}


    public appendAt(AllBinaryLayer layerInterface, int32_t index){
this.stringBuilder!.delete(0, this.stringBuilder!.length());
    
this.logUtil!.putF(this.stringBuilder!.appendint(TsUtil.getInstance()!.hashCode(this))!.append(this.APPEND_)!.append(layerInterface!.getName())!.append(this._AT_)!.appendint(index)!.toString(), this, this.APPEND);
    
}


    public remove(AllBinaryLayer layerInterface){

                        if(layerInterface == 
                                    null
                                )
                        
                                    {
                                    this.stringBuilder!.delete(0, this.stringBuilder!.length());
    
this.logUtil!.putF(this.stringBuilder!.appendint(TsUtil.getInstance()!.hashCode(this))!.append(this.ATTEMPT_REMOVE_)!.append(StringUtil.getInstance()!.toString(layerInterface))!.toString(), this, this.REMOVE);
    

                                    }
                                
                        else {
                            this.stringBuilder!.delete(0, this.stringBuilder!.length());
    
this.logUtil!.putF(this.stringBuilder!.appendint(TsUtil.getInstance()!.hashCode(this))!.append(this.ATTEMPT_REMOVE_)!.append(layerInterface!.getName())!.toString(), this, this.REMOVE);
    

                        }
                            
}


    public removeResult(LayerManager layerManager, AllBinaryLayer layerInterface, bool result){

                        if(layerInterface == 
                                    null
                                )
                        
                                    {
                                    this.stringBuilder!.delete(0, this.stringBuilder!.length());
    
this.logUtil!.putF(this.stringBuilder!.appendint(TsUtil.getInstance()!.hashCode(this))!.append(this.REMOVE_)!.append(StringUtil.getInstance()!.toString(layerInterface))!.toString(), this, this.REMOVE);
    

                                    }
                                
                             else 
                        if(result)
                        
                                    {
                                    
                        if(LayerManagerLogging.removeFailed)
                        
                                    {
                                    this.stringBuilder!.delete(0, this.stringBuilder!.length());
    
this.logUtil!.putF(this.stringBuilder!.appendint(TsUtil.getInstance()!.hashCode(this))!.append(this.REMOVE_)!.append(layerInterface!.getName())!.toString(), this, this.REMOVE);
    

                                    }
                                

                                    }
                                
                        else {
                            this.stringBuilder!.delete(0, this.stringBuilder!.length());
    
this.logUtil!.putF(this.stringBuilder!.appendint(TsUtil.getInstance()!.hashCode(this))!.append(this.DID_NOT_REMOVE)!.append(layerInterface!.getName())!.toString(), this, this.REMOVE);
    
LayerManagerLogging.removeFailed= true;
    

                        }
                            
}


    log(LayerManager layerManager){
this.stringBuilder!.delete(0, this.stringBuilder!.length());
    

    size: int32_t = layerManager!.getSize()!;;
    

    commonSeps: CommonSeps = CommonSeps.getInstance()!;;
    
this.stringBuilder!.append(Integer.toHexString(TsUtil.getInstance()!.hashCode(layerManager)))!.append(commonSeps!.COLON_SEP);
    
this.stringBuilder!.appendint(size)!.append(commonSeps!.COLON_SEP);
    

    allBinaryLayer: AllBinaryLayer;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
allBinaryLayer= (layerManager!.getLayerAt(index) as AllBinaryLayer);
    
this.stringBuilder!.append(allBinaryLayer!.getName())!.append(commonSeps!.COMMA);
    
}

this.logUtil!.putF(this.stringBuilder!.toString(), this, this.REMOVE);
    
}


    public clear(){
this.stringBuilder!.delete(0, this.stringBuilder!.length());
    
this.logUtil!.putF(this.stringBuilder!.appendint(TsUtil.getInstance()!.hashCode(this))!.append(this.CLEAR)!.toString(), this, this.CLEAR);
    
}


};

            

