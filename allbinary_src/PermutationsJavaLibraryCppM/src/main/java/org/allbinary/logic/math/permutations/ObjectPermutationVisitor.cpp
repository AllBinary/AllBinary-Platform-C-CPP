
        /* Generated Code Do Not Modify */
        



            #include "../../../../../java/lang/System.h"
        
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/visitor/Visitor.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ObjectPermutationVisitor: public Visitor {
        

    const data: std::vector<any>;

public constructor (std::vector<any> data){

            super();
        this.data= data;
    
}


    private: stringBuilder: StringMaker = new StringMaker();

    public any visit(any = {} anyType){
this.stringBuilder!.delete(0, stringBuilder!.length());
    
this.print(this.data, stringBuilder);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil.getInstance()!.NULL_OBJECT;
    
}


    public print(std::vector<any> data){

    stringBuilder: StringMaker = new StringMaker();;
    
this.print(data, stringBuilder);
    
}


    public print(std::vector<any> data, StringMaker stringBuilder){

    tsUtil: TsUtil = TsUtil.getInstance()!;;
    

    size: int32_t = data.length
                ;;
    




                        for (
    i: int32_t = 0;i < size; i++)
        {
stringBuilder!.appendint(tsUtil!.hashCode(data[i]!));
    
stringBuilder!.append(CommonSeps.getInstance()!.SPACE);
    
}

console.log(stringBuilder!.toString());
    
}


};

            

