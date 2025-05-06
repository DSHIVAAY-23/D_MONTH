// SPDX-License-Identifier: MIT
pragma solidity ^0.8.26;

contract variables{
    string public hell = "hello";
    uint256 public num = 13579;
    uint public vaby ;
    mapping(string=>uint) public age; 



      address public constant MY_ADDRESS =
        0x777788889999AaAAbBbbCcccddDdeeeEfFFfCcCc;
        
    function dosomethin() public  {
    uint256 i =350;

    vaby = num + i ;
   
    uint256  timestamp =block.timestamp;
    address sender = msg.sender;
     

    }


    function get_age( )public view returns (uint){
    return age["pooja"];
    }
}