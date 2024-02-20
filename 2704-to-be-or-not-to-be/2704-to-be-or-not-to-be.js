/**
 * @param {string} val
 * @return {Object}
 */
function expect(val){
    const value=val
    
    return{
        toBe:function(newVal)
        {
            if(newVal!==value)
                throw new Error("Not Equal")
            else
                return true
        },
        notToBe:function(newVal){
            if(value===newVal)
                throw new Error("Equal") 
        else
            return true
        }
    }
}
/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */