function calculateOrder() {
    const unitPrice = Number(document.getElementById("unitPrice").value);
    const quantity = Number(document.getElementById("quantity").value);
    const customerType = document.getElementById("customerType").value;
   const subtotal = unitPrice * quantity;
    const rate = getRate(customerType);
    const discount = calculateDiscount(subtotal, rate);
   const serviceCharge = subtotal * 0.05; 
    const payable = calculateTotal(subtotal, discount, serviceCharge);
    document.getElementById("result").textContent = "Subtotal: ₹" + subtotal + " | Discount: ₹" + discount + " | Service: ₹" + serviceCharge + " | Payable: ₹" + payable;
    document.getElementById("breakdown").textContent = buildBreakdown(unitPrice, quantity);
}

function calculateDiscount(amount, percentage) {
    return amount * percentage / 100;
}

function getRate(type) {
    if (type === "Student") {
        return 10;
    } else if (type === "Staff") {
        return 5;
    } else {
        return 0;
    }
}

function calculateTotal(subtotal, discount, serviceCharge) {
    return subtotal - discount + serviceCharge;
}

function buildBreakdown(unitPrice, quantity) {
    let output = "";
    for (let i = 1; i <= quantity; i++) {
        output += "After item " + i + ": ₹" + (unitPrice * i) + "\n";
    }
    return output;
}