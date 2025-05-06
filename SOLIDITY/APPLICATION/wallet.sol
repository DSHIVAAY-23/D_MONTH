// SPDX-License-Identifier: MIT
pragma solidity ^0.8.26;


contract ethwallet{
    address payable public owner;

    constructor() {
        owner = payable(msg.sender);
    }

    receive() external payable {
        // This function is called when the contract receives Ether
    }


    function withdraw(uint256 amount) public {
        require(msg.sender == owner, "Only the owner can withdraw");
        require(amount <= address(this).balance, "Insufficient balance");

        // Transfer the specified amount to the owner
        owner.transfer(amount);
    }

    function getBalance() public view returns (uint256) {
        return address(this).balance;
    }
}