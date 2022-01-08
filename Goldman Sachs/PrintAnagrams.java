class Solution {
    public List<List<String>> Anagrams(String[] string_list) {
        // Code here
        List<List<String>> ans = new ArrayList<>();
        HashMap<String, ArrayList<String>> map = new HashMap<>();
        
        for(String str: string_list)
        {
            String temp = str;
            char[] ch = str.toCharArray();
            Arrays.sort(ch);
            String newString = new String(ch);
            if(map.containsKey(newString))
            {
                ArrayList<String> inner = map.get(newString);
                inner.add(str);
                map.put(newString, inner);
            }
            else
            {
                ArrayList<String> inner = new ArrayList<>();
                inner.add(str);
                map.put(newString, inner);
            }
            
        }
        
        for(var a: map.values())
        {
            ArrayList<String> inner = a;
            ans.add(inner);
        }
    
        
        return ans;
    }
}
