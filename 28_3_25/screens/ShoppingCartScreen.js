import React from 'react';
import { View, Text, StyleSheet, Image, TouchableOpacity, ScrollView } from 'react-native';
import Icon from 'react-native-vector-icons/Ionicons';

const ShoppingCartScreen = ({ route, navigation }) => {
    const { item } = route.params; // Get the item passed from HomeScreen

    return (
        <ScrollView style={styles.container}>
            {/* Header */}
            <View style={styles.header}>
                <TouchableOpacity onPress={() => navigation.goBack()}>
                    <Icon name="arrow-back-outline" size={24} color="#000" />
                </TouchableOpacity>
                <Text style={styles.headerTitle}>Shopping Cart</Text>
            </View>

            {/* Item Details */}
            <View style={styles.itemContainer}>
                <Image source={item.image} style={styles.itemImage} />
                <Text style={styles.itemName}>{item.name}</Text>
                <Text style={styles.itemPrice}>${item.price}</Text>
                <Text style={styles.itemRating}>
                    <Icon name="star" size={16} color="#FFD700" /> {item.rating}
                </Text>
            </View>

            {/* Checkout Section */}
            <View style={styles.checkoutContainer}>
                <Text style={styles.checkoutTitle}>Checkout Summary</Text>
                <View style={styles.checkoutRow}>
                    <Text>Subtotal (1)</Text>
                    <Text>${item.price}</Text>
                </View>
                <View style={styles.checkoutRow}>
                    <Text>Delivery Fee</Text>
                    <Text>$6.20</Text>
                </View>
                <View style={styles.checkoutRow}>
                    <Text style={styles.totalText}>Payable Total</Text>
                    <Text style={styles.totalText}>${item.price + 6.2}</Text>
                </View>
                <TouchableOpacity style={styles.confirmButton}>
                    <Text style={styles.confirmButtonText}>Confirm Order</Text>
                </TouchableOpacity>
            </View>
        </ScrollView>
    );
};

const styles = StyleSheet.create({
    container: {
        flex: 1,
        backgroundColor: '#fff',
        padding: 16,
        marginTop: 20,
    },
    header: {
        flexDirection: 'row',
        alignItems: 'center',
        marginBottom: 16,
    },
    headerTitle: {
        fontSize: 18,
        fontWeight: 'bold',
        marginLeft: 8,
    },
    itemContainer: {
        alignItems: 'center',
        marginBottom: 16,
    },
    itemImage: {
        width: 200,
        height: 200,
        borderRadius: 12,
        marginBottom: 8,
    },
    itemName: {
        fontSize: 20,
        fontWeight: 'bold',
    },
    itemPrice: {
        fontSize: 18,
        color: '#6200EE',
        marginVertical: 4,
    },
    itemRating: {
        fontSize: 14,
        color: '#888',
    },
    checkoutContainer: {
        marginTop: 16,
        padding: 16,
        backgroundColor: '#F8F8F8',
        borderRadius: 12,
    },
    checkoutTitle: {
        fontSize: 16,
        fontWeight: 'bold',
        marginBottom: 8,
    },
    checkoutRow: {
        flexDirection: 'row',
        justifyContent: 'space-between',
        marginBottom: 8,
    },
    totalText: {
        fontSize: 16,
        fontWeight: 'bold',
    },
    confirmButton: {
        backgroundColor: '#6200EE',
        padding: 12,
        borderRadius: 8,
        alignItems: 'center',
        marginTop: 16,
    },
    confirmButtonText: {
        color: '#fff',
        fontSize: 16,
        fontWeight: 'bold',
    },
});

export default ShoppingCartScreen;